#include <iostream>

using namespace std;

void chap(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int a[] = {22, 345, 23, 46};
    int size = sizeof(a) / sizeof(a[0]); 
    chap(a, size);
    return 0;
}
