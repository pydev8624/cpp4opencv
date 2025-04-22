#include <iostream>
#include <string>
using namespace std;

class hi {
public:
    static void hello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

int main() {
    
    hi::hello("user");
    return 0;
}
