#include <iostream>

using namespace std;

class Player {
  // this is the default way to initialize
  // if you do like this, you have to call each attribute in main to set its value
 public:
  string name;
  int health;
  int level;
  int exp;
};

class Player2 {
 public:
  string name;
  int health;
  int level;
  int exp;

  // this is the intialization using constructors -> and it is the preffered and hasale free way
  Player2(string name, int health, int level, int exp) {
    // the this keyword is used to point the attributes of the class
    // this syntax means,
    // assign the value of parameter name passed in the constuctor, to the attribute of 'this' class
    this->name = name;
    this->health = health;
    this->level = level;
    this->exp = exp;
  }
};

class Player3 {
 private:
  string name;
  int health;
  int level;
  int exp;

 public:
  // intialization using intialization list -> even more preffered and cleaner way to initialize
  Player3(string name, int health, int level, int exp)
      : name(name), health(health), level(level), exp(exp) {}

  // if you want to see or change the values of the private members from the main then
  // you can use getter and setter functions
  // the getters and setters should be under public if you want to access them from main
  // getter functions
  string get_name() { return name; }
  int get_health() { return health; }
  int get_level() { return level; }
  int get_exp() { return exp; }

  // setter functions to change or set the values of the private members
  void set_name(string name) { this->name = name; }
  void set_health(int health) { this->health = health; }
  // same for level and exp
};

int main() {
  Player shubham;
  shubham.exp = 10;
  shubham.level = 20;
  shubham.health = 90;
  shubham.name = "shubham";

  cout << shubham.name << endl;

  Player2 shubh("shubham", 90, 20, 10);
  cout << shubh.name << endl;

  Player3 s("shubham", 80, 32, 12);
  cout << s.get_name() << endl;

  return 0;
}
