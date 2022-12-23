#include <iostream>
#include <string>
using namespace std;

string uncomment(string s) {
	int index1 = s.find("/*");
    int index2 = s.find("*/");

    int start = index1 + 2;
    int length = index2 - start;
    
    return s.substr(start, length);
}
int main() {
    string s = "      /*.Shubham is a competitive programmer.....*/      .";
	
    string uncommented_string = uncomment(s);
    cout << uncommented_string << endl;

    return 0;

}