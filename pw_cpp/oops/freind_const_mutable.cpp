#include <iostream>
#include <string>

using namespace std;

// freind function -> "I trust you, enen though you are not me!!!"
class Secret {
 private:
  string secret_code =
      "Nigam toh chutiya hai, din bhar sota rehta hai - Par bhai tu usko bolna "
      "mat";
  friend void tota_madarchod(const Secret &);
};

void tota_madarchod(const Secret &victor_secrete) {
  string secret = victor_secrete.secret_code;
  int split_idx = secret.find('-');
  cout << "Tota Next Day : " << endl;
  cout << "Tereko pata kya Nigam, Victor Bol raha tha : "
       << secret.substr(0, split_idx) << endl;
}

// const keyword usess in case of class :
class TestClass {
 private:
  // this is the usage of const in case of attributes
  const int var1;
  const static int var2;
  int var3;
  // this is a mutable variable means it doesnt respect the const in methods
  mutable int log;

 public:
  TestClass(int var1, int var3, int log) : var1(var1), var3(var3), log(log) {}

  // this const make sure that any members of the class inside the body of the method should not get changed
  // mutable variables are the exceptions
  void display() const { cout << var1 << endl; }

  // this const make sures that the parameter that is passed in the function should not be changed
  void add_num(const int num) { var3 += num; }

  // this const make sures that the object returned is immutable
  const int get_var3() { return var3; }

  // this log can be changed inside the const method because it is mutable
  void increase_log() const { log++; }

  const int get_log() { return log; }
};

int main() {
  Secret victor;
  tota_madarchod(victor);

  TestClass t(10, 20, 1);
  t.display();

  t.add_num(20);

  int val = t.get_var3();
  cout << val++ << endl;

  t.increase_log();
  int l = t.get_log();
  cout << l << endl;

  return 0;
}
