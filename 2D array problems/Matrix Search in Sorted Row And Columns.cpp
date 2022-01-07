#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0 ;i<m;i++)
    {
        for(int j = 0;j<n ;j++)
        {
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;
    int s= -1;
    int e = -1;
    int i = 0;
    int j = n-1;
    while(j>=0 && i<n-1)
    {
        if(arr[i][j]>k)
        {
            j--;
        }
        if(arr[i][j]<k)
        {
            i++;
        }
        if(arr[i][j]==k)
        {
            s = i;
            e = j;
            break;
        }
        if(j<0 && i>=n)
        {
            break;
        }
    }
    if(s==1)//element is present
    {
        cout<<"element is present";
    }
    else{
        cout<<"element is absent";
    }
}
