
#include<iostream>
using namespace std;

int main()
{
    int m,n,k;
    cin>>m>>n>>k;
    int arr[m][n];
    for(int i = 0;i<m;i++)
    {
        for(int j =0 ;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ;i<m;i++)
    {
        for(int j = 0;j<n ;j++)
        {
            if(arr[i][j]==k)
            {
                cout<<"present";
                return 0;
            }
        }
    }
    cout<<"NotPresebt";

}
