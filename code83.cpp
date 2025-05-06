#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);

    for (int x : myList)
        cout << x << " ";
    return 0;
}
