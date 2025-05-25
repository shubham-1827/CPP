#include <functional>
#include <iostream>

using namespace std;

class Book {
private:
  string name;
  float price;
  int no_of_pages;

public:
  // setters
  void set_name(string n) { name = n; }
  void set_price(float p) { price = p; }
  void set_pages(int pages) { no_of_pages = pages; }

  int count_books(float given_price) {
    if (price < given_price) {
      return 1;
    } else {
      return 0;
    }
  }

  bool is_book_present(string given_name) {
    if (name == given_name) {
      return 1;
    } else {
      return false;
    }
  }
};

int main() {

  Book harry_potter;
  harry_potter.set_name("harry");
  harry_potter.set_price(200.15);

  cout << harry_potter.count_books(200) << endl;
  cout << harry_potter.is_book_present("harry") << endl;

  return 0;
}
