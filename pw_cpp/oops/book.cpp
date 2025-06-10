#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
 private:
  string name;
  int no_of_pages;
  float price;

 public:
  Book(string name, int pages, float price)
      : name(name), no_of_pages(pages), price(price) {}

  string get_name() { return name; }
  int get_pages() { return no_of_pages; }
  float get_price() { return price; }

  void set_name(string name) { this->name = name; }
  void set_pages(int pages) { this->no_of_pages = pages; }
  void set_price(float price) { this->price = price; }
};

class BookBundle {
 private:
  vector<Book> books;
  // this is not the correct way,
  // using this way to calculate size will only calculate the size of vector at the time of initialization
  // but if you add more books then this variable will not update
  // int no_of_books = books.size();

 public:
  BookBundle(vector<Book> books) : books(books) {}

  int count_books(int price) {
    int count = 0;
    for ( Book x : books ) {
      if ( x.get_price() < price ) {
        count++;
      }
    }
    return count;
  }

  bool is_book_present(string title) {
    for ( Book x : books ) {
      if ( x.get_name() == title ) {
        return true;
      }
    }
    return false;
  }

  // int get_no_of_books() { return no_of_books; }
  //the better way is to calculate the size of books dynamically using a method
  int get_no_of_books() { return books.size(); }

  void add_books(Book b) { books.push_back(b); }
};

int main() {
  BookBundle bundle({Book("Book1", 20, 34.5), Book("Book2", 31, 32.1),
                     Book("Book3", 45, 53.2)});

  cout << "Books under rs 500 : " << bundle.count_books(500) << endl;

  string title;
  cin >> title;
  cout << "Books with a title " << title << " " << bundle.is_book_present(title)
       << endl;

  cout << "total no. of books in bundle : " << bundle.get_no_of_books() << endl;

  cout << "adding the book to the Bundle ... " << endl;
  bundle.add_books(Book("Book4", 40, 399));
  cout << "now the total no. of books in bundle are "
       << bundle.get_no_of_books() << endl;

  return 0;
}
