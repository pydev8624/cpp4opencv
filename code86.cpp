#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 30};
    auto it = myList.end();
    --it; // موقعیت دوم
    myList.insert(it, 20); // درج عدد 20
    it=myList.begin();
    ++it;
    myList.insert(it, 40);
    for (int x : myList)
        cout << x << " ";
    return 0;
}
