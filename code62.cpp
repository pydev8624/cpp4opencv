#include <iostream>

using namespace std;

void test(int* a)
{
    *a=100;
}

int main() {
    int n=99;
    test(&n);
    cout<<n<<endl;
    return 0;
}
