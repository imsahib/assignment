#include<iostream>
using namespace std;
class A
{
    public:
        void f1();              
        {

        }
        void f2()
        {

        }

};
class B : public A
{
    public:
        void f1()               // overriding
        {

        }
        void f2( int x)      // function hiding.
        {

        }
        void f2()
        {
            
        }

};
int main()
{
    B obj;
    obj.f1();
    obj.f2();
}