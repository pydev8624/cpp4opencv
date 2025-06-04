#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> names;
    names.insert({1, "ali"});
    names.insert({2, "amie"});
    names.insert({1, "david"}); 

    cout << "Count of key 1: " << names.count(1) << endl;
}
