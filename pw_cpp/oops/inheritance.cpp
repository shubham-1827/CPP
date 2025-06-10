#include <iostream>
#include <string>
#include <vector>

using namespace std;

// single inheritance example
//🔸 Question:
//Create a Person class with attributes like name and age. Then create a Student class that inherits from Person and adds roll_number and marks.
//Write a program to input and display all the details of a student.

//🧠 Goal: Understand how a child class reuses and extends a parent class.
class Person {
 protected:
  string name;
  int age;

 public:
  Person(string name, int age) : name(name), age(age) {}

  void get_info() {
    cout << name << endl;
    cout << age << endl;
  }
};

class Student : private Person {
 private:
  int roll_no;
  int marks;

 public:
  Student(string name, int age, int roll_no, int marks)
      : Person(name, age), roll_no(roll_no), marks(marks) {}

  void show_info() {
    cout << name << endl;
    cout << age << endl;
    cout << roll_no << endl;
    cout << marks << endl;
  }
};

// Multi level inheritance example
// 🔸 Question:
// Create a class Person, derived class Employee, and further derived class Manager.
// Each class should add some specific data (name, salary, department).
// Write a function to display complete info for a Manager object.

// 🧠 Goal: Practice the chain of inheritance where one class inherits from another which itself is a derived class.

//using the person class declared above
class Employee : public Person {
 protected:
  int employee_id;
  int salary;
  string department;

 public:
  Employee(string name, int age, int employee_id, int salary, string department)
      : Person(name, age),
        employee_id(employee_id),
        salary(salary),
        department(department) {}

  void get_info() {
    Person::get_info();
    cout << employee_id << endl;
    cout << salary << endl;
    cout << department << endl;
  }
};

class Manager : public Employee {
 protected:
  int people_working_under;
  vector<string> names_of_working_under;

 public:
  Manager(string name, int age, int employee_id, int salary, string department,
          int people_working_under)
      : Employee(name, age, employee_id, salary, department),
        people_working_under(people_working_under) {
    add_people();
  }

  void add_people() {
    for ( int i = 0; i < people_working_under; i++ ) {
      string x;
      cin.ignore();
      getline(cin, x);
      names_of_working_under.push_back(x);
    }
  }

  void get_info() {
    Employee::get_info();
    cout << people_working_under << endl;
    for ( auto x : names_of_working_under ) {
      cout << x << " ";
    }
    cout << endl;
  }
};

// example of multiple inheritance
// Question:
// Create a class Writer (with writing_speed) and another class Reader (with reading_speed).
// Then create a class Scholar that inherits from both.
// Initialize the data and display reading and writing speeds of the scholar.

// Goal: Understand how a class can inherit from multiple base classes and manage data from both.

class Writer {
 protected:
  int writing_speed;

 public:
  Writer(int writing_speed) : writing_speed(writing_speed) {}
  void get_writing_speed() { cout << writing_speed << endl; }
};

class Reader {
 protected:
  int reading_speed;

 public:
  Reader(int reading_speed) : reading_speed(reading_speed) {}

  void get_reading_speed() { cout << reading_speed << endl; }
};

class Scholar : public Person, public Writer, public Reader {
 private:
  string university;
  int year_of_graduation;

 public:
  Scholar(string name, int age, int writing_speed, int reading_speed,
          string university, int year_of_graduation)
      : Person(name, age),
        Reader(reading_speed),
        Writer(writing_speed),
        university(university),
        year_of_graduation(year_of_graduation) {}

  void get_scholar_info() {
    get_info();
    get_reading_speed();
    get_writing_speed();
    cout << university << endl;
    cout << year_of_graduation << endl;
  }
};

int main() {
  //types of inheritance :
  // 1. single inheritance
  // 2. multiple inheritance
  // 3. Multi level inheritance
  // 4. heirarchial inheritance
  // 5. hybrid inheritance

  return 0;
}
