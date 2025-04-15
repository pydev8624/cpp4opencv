#include <iostream>

using namespace std;

void addup(int &a, int &b)
{
    a++;
    b++;
}

int main() {
    int x=1, y=9;
    addup(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
