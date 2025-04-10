#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int>old={11,22,33,44,55};
    vector<int>newer;
    newer.assign(old.begin()+1,old.begin()+4);
    for (int i:newer)
    {
        cout<<i<<endl;
    }
    return 0;
}
