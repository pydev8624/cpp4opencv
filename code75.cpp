#include <iostream>

using namespace std;

class Human 
{
    private:
       int passcode ;  

    public:
       Human (int pass_code)
       {
        passcode=pass_code;
       }

       void chap()
       {
        cout<<passcode<<endl;
       }

    
};

int main() {
    Human h(123);
    h.chap();
    return 0;
}
