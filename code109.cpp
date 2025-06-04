#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> names;
    names.insert({1,"ali"});
    names.insert({2,"amir"});
    names.insert({3,"david"});
    
    cout<<names[1]<<endl;
}
