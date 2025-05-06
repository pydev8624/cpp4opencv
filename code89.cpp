#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    cout << (myList.empty() ? "Empty" : "Not Empty")<<endl;
    return 0;
}
