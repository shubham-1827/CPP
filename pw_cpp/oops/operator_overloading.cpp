#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

class Point2D {
 private:
  float x, y;

 public:
  Point2D(int x = 0, int y = 0) : x(x), y(y) {}

  Point2D operator+(const Point2D& p) {
    return Point2D(this->x + p.x, this->y + p.y);
  }

  // jo pehle likha hai usme se aage wale ko minus karna hai
  // like c = a - b (so a me minus karo b ko)
  Point2D operator-(const Point2D& p) const {
    return Point2D(this->x - p.x, this->y - p.y);
  }

  bool operator==(const Point2D& p) const {
    return (this->x == p.x and this->y == p.y) ? true : false;
  }

  friend ostream& operator<<(ostream& out, const Point2D& p) {
    out << "( " << p.x << ", " << p.y << " )";
    return out;
  }

  //implementing the indexing function
  // return bu reference if you want to assingn values as well
  // if a is object of Point2D class
  // then , a[0] = 10 is also valid
  float& operator[](int index) {
    if ( index == 0 ) {
      return x;
    }
    else if ( index == 1 ) {
      return y;
    }
    else {
      cout << "Invalid Index" << endl;
      // exit(1);
      // or
      throw out_of_range("Invalid index for Point2D");
    }
  }

  // now we will overload () to calculate euclidian distance between a and b,
  // like a(b) return distance between a and b  starting from a
  // formula for euclidian distance :
  // underroot((x2 - x1)^2 + (y2 - y1)^2)
  float operator()(Point2D& p) const {
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
  }
};

int main() {
  Point2D a(3, 4), b(4, 5);

  // adding coordinates
  Point2D c = a + b;

  // subtracting
  Point2D d = a - b;

  cout << boolalpha << (a == b) << endl;
  cout << c << endl;
  cout << d << endl;
  cout << c[0] << endl;
  cout << d[1] << endl;
  // this will through the out of range termination call
  // cout << d[3] << endl;

  // this is a unique way without creating a object variable in the memory
  cout << Point2D(a + b) << endl;
  cout << a(b) << endl;

  return 0;
}
