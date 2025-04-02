#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Hello, World!";
    text.erase(5, 2); 
    cout << text << endl; 
    return 0;
}
