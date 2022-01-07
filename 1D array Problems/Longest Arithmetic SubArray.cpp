/*
Arithmatic Array = array contains at least two integers and the diff bet consecutive integers are equal .eg [1,3],[3,3,3],[1,3,5,7]


Problem :
    Array of length N . find arithmetic subArray of ans length



*/
#include<iostream>

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

    int pv = arr[1]-arr[0];

    int ans = 0;
    if(n < 2)
    {
        cout<<"Invalid Array Size for Arithmetic Array";
    }
    else{
        int curr = 2;
        for(int i = 0 ; i<n-1 ;i++)
        {
            if(pv == arr[i+1]-arr[i])
            {
                curr++;

            }
            else{
               ans = max(curr,ans);
                curr = 2;
            }
        }
        cout<<"\n"<<ans+1;
    }
    return 0;
}
