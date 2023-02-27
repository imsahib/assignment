#include<iostream>
using namespace std;
namespace n1
{
    int a=5;
}
using namespace n1;
namespace n2
{
    int b=8;
}
using namespace n2;
int main()
{
    int a=9,b=10;
    cout<<n1::a<<endl;
    cout<<n2::b<<endl;
}
