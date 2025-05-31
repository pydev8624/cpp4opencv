#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {1,34,5,6,3};
    mySet.erase(5);
    
    for (int value : mySet) {
        cout << value << " "<<endl;
    }

    return 0;
}
