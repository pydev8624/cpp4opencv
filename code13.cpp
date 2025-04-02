#include <iostream>
#include<string>
using namespace std;

int main() {
   string text1="C++ is awesome and programmers like it";
   string text2="*/*";
   string text3="prog";
   cout<<text1.find(text2)<<endl;
   cout<<text1.find(text3)<<endl;
   return 0;
}
