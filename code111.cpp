#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> names={{1,"ali"},{2,"amier"}};
   
    cout<<names.at(1)<<endl;
}
