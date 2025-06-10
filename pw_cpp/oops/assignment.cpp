#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date {
 private:
  int date;
  int month;
  int year;

 public:
  Date(int date, int month, int year) : date(date), month(month), year(year) {}

  bool operator==(const Date &obj) const {
    return (this->date == obj.date and this->month == obj.month and
            this->year == obj.year);
  }
};

class Employee {
 private:
  int employee_id;
  int salary;

 public:
  string name;

  Employee(string name, int employee_id, int salary)
      : name(name), employee_id(employee_id), salary(salary) {}

  void display() {
    cout << name << endl;
    cout << employee_id << endl;
    cout << salary << endl;
  }

  //getter for the salary and employee_id
  int get_employee_id() { return employee_id; }
  int get_salary() { return salary; }
};

float average_salary(vector<Employee> &e) {
  float sum = 0;
  for ( int i = 0; i < e.size(); i++ ) {
    sum += e[i].get_salary();
  }
  return (sum / e.size());
}

string max_salary(vector<Employee> &e) {
  int max = 0;
  for ( int i = 1; i < e.size(); i++ ) {
    if ( e[i].get_salary() > e[max].get_salary() ) {
      max = i;
    }
  }
  return e[max].name;
}

int main() {
  Date d1(17, 03, 2003);
  Date d2(17, 03, 2003);
  cout << boolalpha << (d1 == d2) << endl;

  vector<Employee> e = {
      Employee("shubham", 14353, 12000), Employee("Parth", 56454, 11000),
      Employee("Nigam", 36543, 26000), Employee("Shukla", 65442, 13000),
      Employee("Ravi", 93854, 9000)};

  cout << average_salary(e) << endl;
  cout << max_salary(e) << endl;

  return 0;
}
