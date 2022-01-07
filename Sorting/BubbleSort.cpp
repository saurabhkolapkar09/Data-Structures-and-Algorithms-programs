#include<iostream>
using namespace std;

int* binarySort(int arr[],int n)
{
    for(int i = 0 ;i<n-1 ;i++)
    {
        int f = 0;
        for(int j = 0 ;j<n-1-i;j++)
        {
            int temp;
            if(arr[j] > arr[j+1])
            {
                f = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(f ==0)
        {
            break;
        }
    }
    return arr;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }

   int *arr1= binarySort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
