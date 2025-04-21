#include <iostream>

using namespace std;

class Human 
{
    private:
      int passcode = -1;  

    public:

    void setpass(int pass)
    {
        passcode = pass;
    }
    
    int getpass()
    {
        return passcode;
    }
};

int main() {
    Human h;          
    h.setpass(123);   
    cout << h.getpass() << endl;  
    return 0;
}
