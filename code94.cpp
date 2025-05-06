#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> list1 = {10, 60, 50};
    list<int> list2 = {20, 40, 60};
    list1.merge(list2); // list2 خالی می‌شود

    for (int x : list1)
        cout << x << " ";
    return 0;
}
