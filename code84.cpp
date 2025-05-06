#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30};
    myList.pop_back();

    for (int x : myList)
        cout << x << " ";
    return 0;
}
