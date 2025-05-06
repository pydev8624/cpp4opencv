#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {40, 10, 30, 20};
    myList.sort();

    for (int x : myList)
        cout << x << " ";
    return 0;
}
