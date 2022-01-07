#include<iostream>
//x = (A[i] -A[j]) +(i-j);
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
    int max1 = 0;

    for(int  i = 0; i<n;i++)
    {
        if((arr[i]+i) > max1)
        {
            max1= arr[i]+i;
        }
    }
    int max2 = 11100;
    for(int j = 0 ;j<n ;j++)
    {
        if((arr[j]+j) < max2)
        {
            max2 = arr[j]+j;
        }
    }

    if(max1>max2)
    {
        cout<<"max sum is "<<max1-max2;
    }
    else{
        cout<<"max sum is  "<<max2-max1;
    }

    return 0;

}
