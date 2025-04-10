#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> names;
    names.assign(4,"#");
    for (string name : names)
    {
        cout << name << endl;
    }
    return 0;
}
