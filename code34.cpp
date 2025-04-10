#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
  vector<string> cars = {"Volvo", "BMW", "Ford"};
  for (string names : cars)
  {
    cout<<names<<endl;
  }
}
