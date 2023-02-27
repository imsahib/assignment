#include<iostream>
using namespace std;
class Example
{
    private:
        int a;
    public:
            Example()
            {
                cout<<endl<<"default";
            }

            Example(int x)
            {
                cout<<endl<<"paramterized constructor";
                a=x;
            }

};
class Complex
{
    private:
        int real;
        int const img;
        int &z;
        Example obj1;
    public:
        Complex() : real(0),img(0) ,z(real),obj1(5)        //1 order  2 const member 3 reference variable 4 parametrized constructor 5 name conflict
        {
                //real=0;img=0;
        }
        Complex(int real,int img) : real(real),img(img),z(real), obj1(8)
         {
           
         }
        void display()
        {
            cout<<endl<<"real:"<<real<<" img ="<<img;
        }

};
int main()
{
    Complex c1,c2(6,7);
    c1.display();
    c2.display();
}