#include<iostream>
using namespace std;
int *insertionSort(int arr[],int n)
{
    for(int i = 1 ;i<n;i++)
    {
        int j = i-1;
        int temp = arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
    return arr;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *arr1;
    arr1 = insertionSort(arr,n);

    for(int i = 0 ;i<n ;i++)
    {
        cout<<" "<<arr1[i];
    }
    return 0;
}
