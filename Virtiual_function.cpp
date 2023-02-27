#include<iostream>
using namespace std;
class A
{
    public:
       virtual void display()
        {
            cout<<endl<<"Hi, i'm Parent";
        }

};
class B: public A
{
    public:
        void display()
        {
            cout<<endl<<"Hi, i'm Child";
        }
};
int main()
{
    A *p;
    p=new A;
    p->display();  // early binding
    delete p;
    p= new B;
    p->display();
    delete p;
}