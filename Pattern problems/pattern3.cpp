#include<iostream>
using namespace std;

int main()
{
    int row=4;
    int col = 3;
    for(int i = 1 ; i<=(row*col) ; i++)
    {
        cout<<i<<" ";
        if(i%col == 0)
        {
            cout<<endl;
        }
    }

}

