#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "4567324975";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}
