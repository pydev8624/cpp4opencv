#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {1, 34, 5, 6, 3};

    auto it = mySet.find(6);

    if (it!=mySet.end()){
        mySet.erase(6);
    }

    for (int item:mySet){
        cout<<item<<endl;
    }

    return 0;
}
