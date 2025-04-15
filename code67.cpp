#include<iostream>

using namespace std;

void chap()
{
    cout<<"None"<<endl;
}

void chap(string word1)
{
    cout<<word1<<endl;
}

void chap(string word1, int num)
{
    cout<<word1<<num<<endl;
}

int main() 
{
    chap();
    chap("rep");
    chap("rep",10);
    return 0;
}
