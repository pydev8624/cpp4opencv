#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> names;
    names.insert({1, "ali"});
    names.insert({2, "amie"});
    names.insert({3, "david"}); 
    names.insert({4, "akbar"}); 

    for (auto& item:names){
        cout<<item.first<<" "<<item.second<<endl;
    }

}
