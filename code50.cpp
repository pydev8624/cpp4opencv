#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>old={11,22,33,44,55};
    vector<int>newer={152,133};
    newer.swap(old);
    for (int i:newer)
    {
        cout<<i<<endl;
    }
    return 0;
}
