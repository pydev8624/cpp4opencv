#include<iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    if (c>0)
    {
        cout<<"+"<<endl;
    }
    else if (c<0)
    {
        cout<<"-"<<endl;
    }
    else if (c==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    return 0;
}
