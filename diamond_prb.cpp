#include<iostream>
using namespace std;
class A                          // virtual base class
{
    public :
        f1();

};
class B1: virtual public A
{
    public :
        f2();

};
class B2 :virtual  public A
{
    public:
        f3();

};
class C: public B1, public B2
{
    public :
            f4();
};
int main()
{
    C obj;
    cout<<"hello";
}