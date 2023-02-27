#include<iostream>
using namespace std;

int greatest(int,int);
int main()
{
    int a,b,x;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    x=greatest(a,b);
    cout<<"Greater value is "<<x;
    return 0;
}

int greatest(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
