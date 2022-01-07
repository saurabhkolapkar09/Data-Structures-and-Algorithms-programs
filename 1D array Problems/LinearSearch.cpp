#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int ele;
    cin>>ele;

    cout<<"\n\n"<<endl;
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    for(int i =0; i<n ;i++)
    {
        if(arr[i] == ele)
        {
            cout<<"The element is present in array at :"<<i<<"index";
            break;
        }


    }
    if(i ==n)
    {
        cout<<"Element is not found";
    }
    return 0;
}
