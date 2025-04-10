#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
  vector<string> cars = {"Volvo", "BMW", "Ford"};
  cars.push_back("Ferrari");
  for (string names : cars)
  {
    cout<<names<<endl;
  }
}
