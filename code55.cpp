#include <iostream>

using namespace std;

string ost()
{
    #if defined(_WIN32)
        return "windows";
    #elif defined(__APPLE__) || defined(__MACH__)
        return "MAC";
    #elif defined(__linux__)
        return "GNU Linux";
    #else
        return "Unknwon";
    #endif
}

int main() {
    cout<<ost()<<endl;
    return 0;
}
