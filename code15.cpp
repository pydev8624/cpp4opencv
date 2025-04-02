#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Hello, World!";
    text.replace(7, 5, "C++"); 
    cout << text << endl; 
    return 0;
}
