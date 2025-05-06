#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30};
    auto it = myList.begin();
    ++it; // اشاره‌گر به 20
    myList.erase(it);

    for (int x : myList)
        cout << x << " ";
    return 0;
}
