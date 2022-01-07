#include<iostream>,
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    int a1[m][n],a2[n][m];
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n ;j++)
        {
            cin>>a1[i][j];
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m ;j++)
        {
            cin>>a2[i][j];
        }

    }
    int arr[m][n];

    for(int i = 0 ;i<m ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int k = 0 ;k<m;k++)
    {
        for(int i = 0;i<m ;i++)
        {
            for(int j = 0 ;j<m;j++)
            {
                arr[k][i] +=a1[k][j]*a2[j][i];
            }
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
