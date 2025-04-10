#include <iostream>
#include <string>
#include<vector>

using namespace std;

int main()
{
  vector<int> a={1,2,3,4,5,6};
  for (int n:a)
  {
    cout<<n<<endl;
  }
  a.clear();
  cout<<"new array is"<<endl;
  for (int n:a)
  {
    cout<<n<<endl;
  }
}
