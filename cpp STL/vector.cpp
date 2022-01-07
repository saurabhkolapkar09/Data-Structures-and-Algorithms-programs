#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<"capacity->"<<arr.capacity()<<endl;

    arr.push_back(1);
    cout<<"size->"<<arr.size()<<endl;
    cout<<"capacity->"<<arr.capacity()<<endl;

    arr.push_back(2);
    cout<<"size->"<<arr.size()<<endl;
    cout<<"capacity->"<<arr.capacity()<<endl;

    arr.push_back(3);
    cout<<"size->"<<arr.size()<<endl;
    cout<<"capacity->"<<arr.capacity()<<endl;

    arr.push_back(3);
    cout<<"size->"<<arr.size()<<endl;
    cout<<"capacity->"<<arr.capacity()<<endl;

     arr.push_back(3);
    cout<<"size->"<<arr.size()<<endl;
    cout<<"capacity->"<<arr.capacity()<<endl;

    arr.pop_back(2);


}
