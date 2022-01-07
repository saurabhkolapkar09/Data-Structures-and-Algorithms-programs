#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int siz;
    cin>>siz;

    char arr[siz+1];
    cin>>arr;
    int n = 0,i = 0;
    while(arr[i] != '\0')
    {
        n = i;
        i++;
    }
   // cout<<n;
    int start = 0,ed = n;
    int p = -1;
    while(true)
    {

      //  cout<<co<<endl;
       // co++;
        if(start >= ed)
        {
            p=1;
            break;
        }
        if(arr[start] ==arr[ed]){
            start++;
            ed--;
        }

        else{
            p=-1;
            break;
        }

    }
    cout<<p;

}
