#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
  vector<string> cars = {"Volvo", "BMW", "Ford"};
  cars.pop_back();
  for (string names : cars)
  {
    cout<<names<<endl;
  }
}
