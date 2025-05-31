#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {5, 2, 8, 1, 3};

    for (int value : mySet) {
        std::cout << value << " ";
    }

    return 0;
}
