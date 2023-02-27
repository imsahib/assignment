#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    try
    {
        if(b==0)
            throw 5;
        c=a/b;
        cout<<"division value is "<<c<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    catch (int x)
    {
        cout<<"not accepted"<<endl;
    }
    catch(...)
    {
        cout<<"Default catch mechanisam"<<endl;
    }
}