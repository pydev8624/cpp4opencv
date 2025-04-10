#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
  vector<double> cars = {1000,2000,3000};
  int i=2;
  while(cars.empty()==false)
  {
    cout<<cars[i]<<endl;
    cars.pop_back();
    i--;
  }
  
}
