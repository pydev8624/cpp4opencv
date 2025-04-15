#include <iostream>
#include <cmath>

using namespace std;

int main() {
    auto sayHi = []() {
        cout << "Hello!" << endl;
    };
    sayHi();

    auto square = [](int x) -> int {
        return x * x;
    };
    cout << square(5); 
    return 0;
}
