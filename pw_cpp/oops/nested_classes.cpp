#include <iostream>
#include <string>

using namespace std;

class Book {
 private:
  string name;
  int pages;
  float price;

  class MetaData {
   public:
    string author;
    float rating;
    string genre;

    MetaData(string a, string g, float r) : author(a), rating(r), genre(g) {}
    void show_metadata() {
      cout << "Author : " << author << endl;
      cout << "Rating : " << rating << endl;
      cout << "Genre : " << genre << endl;
    }
  };
  MetaData* meta;

 public:
  Book(string name, int pages, float price, string author, string genre,
       float rating)
      : name(name), pages(pages), price(price) {
    meta = new MetaData(author, genre, rating);
  }

  void show_info() {
    cout << "Name : " << name << endl;
    cout << "No. of pages : " << pages << endl;
    cout << "Price : " << price << endl;
    meta->show_metadata();
  }
};

int main() {
  Book b1("Chasing the Unknown", 210, 450, "Shubham Tiwari", "Sci-fi", 4.32);
  b1.show_info();

  return 0;
}
