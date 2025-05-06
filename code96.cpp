#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 10, 20, 20, 20, 30};
    myList.unique();

    for (int x : myList)
        cout << x << " ";
    return 0;
}
