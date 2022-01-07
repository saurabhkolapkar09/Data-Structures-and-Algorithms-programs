#include<iostream>
using namespace std;
int *InsertionSort(int arr[],int n)
{
    for(int i =0;i<n-1;i++)
    {
        int temp;
        int mina = i;
        for(int j = i+1;j<n;j++)
        {

            if(arr[mina] > arr[j])
            {
                mina = j;
            }

        }
        if(mina!=i)
        {
            temp = arr[mina];
            arr[mina] = arr[i];
            arr[i] = temp;
        }

    }
    return arr;
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int arr[n];

    for(int i  = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *nm = InsertionSort(arr,n);

    for(int  i = 0 ;i<n;i++)
    {
        cout<<nm[i]<<" ";
    }
    return 0;
}
