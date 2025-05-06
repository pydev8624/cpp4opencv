#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {100, 200, 300};
    cout << "Front: " << myList.front() << ", Back: " << myList.back();
    return 0;
}
