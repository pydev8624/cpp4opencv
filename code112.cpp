#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> names={{1,"ali"},{2,"amier"},{1,"david"}};
   
    cout<<names.at(1)<<endl;
}
