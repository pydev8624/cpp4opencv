#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {1, 34, 5, 6, 3};
    
    mySet.erase(5);
    mySet.insert(10);

    for (int items:mySet){
        cout<<items<<endl;
    }
    return 0;
}
