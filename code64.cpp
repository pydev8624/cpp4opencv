#include<iostream>

using namespace std;

void doubleArray(int* arr, int size)
{
    for(int i = 0; i < size; i++)
        arr[i] *= 2;
}

int main() 
{
    int nums[] = {1, 2, 3};
    doubleArray(nums, 3);
    for(int i = 0; i < 3; i++)
        cout << nums[i] << " ";  
    return 0;
}
