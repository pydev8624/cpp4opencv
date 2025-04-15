#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    for (int num : v)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    printVector(nums);
    return 0;
}
