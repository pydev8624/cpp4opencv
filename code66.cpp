#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v) {
    for (int num : v)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> myVector = {10, 20, 30, 40, 50};
    printVector(myVector);
    return 0;
}
