#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> names = {"c", "c++", "c#", "java", "python"};
    names.erase(names.begin()+1);
    for (string name : names)
    {
        cout << name << endl;
    }
    return 0;
}
