#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int que = a;
    int remain = 0;
    int i = 0,j = 0;
    int arr[100];
    while(que!=0)
    {
        arr[i] = que % 2;
        que = que/2;


        i++;


    }
     cout<<"hiiii"<<i;
    int arr1[4];
    while(i>=0)
    {
        arr1[j] = arr[i];
        cout<<arr[j];
         //cout<<"hiiii   ";
        j++;
        i--;
    }



    return 0;

}
