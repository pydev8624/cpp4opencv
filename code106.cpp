#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = {1, 34, 5, 6, 3};

    // int i;

    // for (i=0;i<5;i++){
    //     cout<<i<<endl;
    // }

    // for (int item:mySet){
    //     cout<<item<<endl;
    // }

    for (auto it=mySet.begin();it!=mySet.end();++it){
        cout<<*it<<endl;
    }

    return 0;
}
