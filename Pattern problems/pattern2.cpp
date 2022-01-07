#include<iostream>
using namespace std;

int main()
{
    int row = 4;
    int col = 4;

    for(int i = 0;i<row;i++)
    {
        for(int j = col;j>=1;j--)
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
