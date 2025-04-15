#include <iostream>
#include <cmath>

using namespace std;

int main() {
    auto sayHi = []() {
        cout << "Hello!" << endl;
    };
    sayHi();
    return 0;
}
