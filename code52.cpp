#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int mat[2][2]={{1,0},{0,1}};
    // 1 0
    // 0 1

    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
