#include <iostream>
using namespace std;

class Human {
public:
    int i=0;
    Human() { // Make constructor public
        cout << "Human "<<i<<" created." << endl;
        i++;
    }

    void fun() {
        cout << "fun() called." << endl;
    }
};

int main() {
    Human h;     // Correct declaration and initialization
    h.fun();     // Call public method
    return 0;
}
