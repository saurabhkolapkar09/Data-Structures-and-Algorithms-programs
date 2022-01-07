#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++)
    {
        int in;
        cin>>in;
        v.push_back(in);
    }
    int i=0,j=0;
    while(i<n)
    {
        if(v[i]!=0)
        {
           swap(v[i],v[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    for(int i =0;i<n;i++)
    {

        cout<<v[i]<<" ";

    }
}
