#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> names;
    names[1]="ali";
    names[2]="amie";
    names[1]="david";

    if (names.count(1) > 0) {
    cout << "Found" <<names.count(1)<< endl;
    }

    if (names.find(1) != names.end()) {
    cout << "Found" << endl;
    }

}
