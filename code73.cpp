#include <iostream>

using namespace std;

class Human 
{
  public:
  int i;
  void fun1(int v)
  {
    i=v;
    cout<<i<<endl;
  }
  void fun2()
  {
    cout<<i<<endl;
  }
};

int main() {
    Human h;   
    h.fun1(10)  ;
    h.i=0;
    h.fun2();
    return 0;
}
