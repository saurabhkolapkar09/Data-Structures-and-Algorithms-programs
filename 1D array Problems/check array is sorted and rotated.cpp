#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int  i =0;i<n;i++)
    {
        int in;
        cin>>in;
        v.push_back(in);

    }

    int c=0;
    for(int i =1;i<=n;i++)
    {
        if(v[i-1]>v[i])
        {
            c++;

        }

    }
    if(v[n-1]>v[0])
    {
        c++;
    }

    if(c<=1)
    {

        cout<<"rotated and sorted";

    }
    else{

                cout<<"not";
    }
}
