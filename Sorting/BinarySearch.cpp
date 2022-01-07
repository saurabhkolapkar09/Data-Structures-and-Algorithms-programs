#include<iostream>
using namespace std;


int binary(int arr[],int n,int el)
{
    int start = 0;

    int mid;
    while(start<n){
         mid = (start+n)/2;
        if(arr[mid]<el)
        {
            start = mid+1;
        }
        else if(arr[mid]>el)
        {
            n = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }

    int el;
    cout<<"\n"<<endl;

    cin>>el;

    int index = binary(arr,n,el);

    if(index ==-1)
    {
        cout<<"element is not present";
    }
    else{
        cout<<"element is present at index :"<<index;
    }

}
