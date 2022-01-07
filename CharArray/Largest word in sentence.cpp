#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    int currlen = 0,maxlen = 0;
    int st = 0,maxst = 0;
    int i =0;
    while(true)
    {
        if(arr[i] == ' ' || arr[i] =='\0')
        {

            if(maxlen<currlen)
            {
                maxlen = currlen;
                maxst= st;
            }
            currlen = 0;
            st = i+1;
        }
        else
            currlen++;
        if(arr[i] =='\0')
        {
            break;
        }


        i++;
    }
    cout<<maxlen<<endl;
    for(int j = 0;j<maxlen;j++)
    {
        cout<<arr[j+maxst];
    }




}
