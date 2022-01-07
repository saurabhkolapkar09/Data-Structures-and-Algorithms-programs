
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;
    char arr[n+1];
    cin>>arr;
    char c;
    cout<<"Enter character";
    cin>>c;
    int i = 0;
    int p = -1;
    while(arr[i]!='/0')
    {
        if(arr[i] == c)
        {
            p = i;

            break;
        }
        i++;

    }
  cout<<p;

}
