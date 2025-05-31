#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {5, 2, 8, 1, 3};

    for (int value : mySet) {
        cout << value << " ";
    }

    return 0;
}
