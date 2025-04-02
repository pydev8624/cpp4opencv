#include <iostream>
#include<string>
using namespace std;

int main() {
   string text1="C++";
   string text2="C++";
   string text3="C+";
   cout<<(text1==text2)<<endl;
   cout<<(text1==text3)<<endl;
   cout<<(text1!=text3)<<endl;
   return 0;
}
