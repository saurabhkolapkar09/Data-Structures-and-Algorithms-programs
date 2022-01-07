#include<iostream>
using namespace std;
int stack[100];
int top = -1;
void push(int v)
{
    if(top >=-1 )
    {
        stack[++top] = v;
    }
    else if(top <-1)
    {
        cout<<"overflow";
    }


}


int pop()
{
    int n = stack[top];
   // free(&stack[top]);
    //free(&stack[top]);
    top--;
    cout<<"POPed element :"<<n;
    return n;
}
int peek()
{

    return stack[top];


}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n ;i++)
    {
        int v;
        cout<<"enter value for values in stack";
        cin>>v;
        push(v);
    }
    int k=pop();
    cout<<" is the poped element:"<<k<<"\n\n";

    cout<<stack[0]<<" is the base : \n\n";

    int p = peek();

    cout<<"the peek of stack  is :"<<p;

    return 0;
}
