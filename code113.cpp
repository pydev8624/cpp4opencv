#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> names;
    names[1]="ali";
    names[2]="amie";
    names[1]="david";

    cout<<names[1]<<endl;
}
