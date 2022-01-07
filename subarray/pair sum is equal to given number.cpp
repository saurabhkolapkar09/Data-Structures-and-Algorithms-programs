#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pairsum(int arr[],int n,int k)
{
    for(int i = 0 ;i<n;i++)
    {
        for(int j = i+1;j<n ;j++)
        {
            if(arr[i]+arr[j] ==k)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];

    }
    bool isPresent = pairsum(arr,n,k);
    if(isPresent)
    {
        cout<<1;
    }
    else{
        cout<<-1;
    }
    return 0;

}
