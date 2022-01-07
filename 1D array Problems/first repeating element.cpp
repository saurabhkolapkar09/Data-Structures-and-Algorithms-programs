//contraints:
//1<=n<=10^6

/*
As in worst case n will be 10^6  as in one sec 10^8 operations can perform,
so max complexity will O(n^2)

So we have to write a program whose time complexity would be O(nlogn) or less
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    int m = *max_element(arr,arr+n);
    int a[m+1];
    for(int i = 0;i<m+1 ;i++)
    {
        a[i] = -1;

    }
    int mn = INT_MAX;


    for(int i = 0;i<n ;i++)
    {
        if(a[arr[i]]!=-1)
        {
            mn =min(mn,a[arr[i]]);
        }
        else{
            a[arr[i]]= i;
        }


    }
    cout<<mn+1;
}

