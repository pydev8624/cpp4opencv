#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name[]={"python","assembly","c++"};
    for (string names:name)
    {
        cout<<names<<endl;
    }
}
