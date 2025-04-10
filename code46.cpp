#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> names = {"c", "c++", "c#", "java", "python"};
    
    // Insert "html" at index 2 (i.e., before "c#")
    names.insert(names.end() , "html");

    for (string name : names)
    {
        cout << name << endl;
    }

    return 0;
}
