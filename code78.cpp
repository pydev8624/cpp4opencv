#include <iostream>

using namespace std;

class Human 
{  

    public:
       Human ()
       {
        
       }

       void chap()
       {
        cout<<"heman1 "<<endl;
       }
       void chap(int age)
       {
        cout<<"heman1 age : "<<age<<endl;
       }
    
};

int main() {
    Human h;
    h.chap();
    h.chap(10);
    return 0;
}
