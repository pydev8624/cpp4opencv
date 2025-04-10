#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
  vector<string> cars ;
  cars.resize(3);
  cars[0]="ferrari";
  cars[2]="benz";
  for (string c:cars)
  {
    cout<<c<<endl;
  }
  
}
