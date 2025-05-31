#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {1};
    mySet.insert(22);
    mySet.insert(33);
    mySet.insert(4);

    for (int value : mySet) {
        cout << value << " "<<endl;
    }

    return 0;
}
