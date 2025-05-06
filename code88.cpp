#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30};
    myList.clear();

    cout << "Size: " << myList.size(); // خروجی 0
    return 0;
}
