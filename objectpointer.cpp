#include<iostream>
using namespace std;
class Complex
{
     private:
        int real,img;
     public:
        Complex() :real(0),img(0)
        {
            
        }
        Complex(int x,int y) : real(x),img(y)
        {
           
        }
        void setData(int x,int y)
        {
            real=x; img=y;
        }
        void display()
        {
            cout<<endl<<"real="<<real<<" img="<<img;
        }
};
void inputData(Complex *p)
{
    int real,img;
    cout<<endl<<"enter real and imaginary part";
    cin>>real>>img;
    p->setData(real,img);
}

int main()
{
    Complex c1(3,4),c2;
    cout<<endl<<"Enter data for object";
    inputData(&c2);
    c2.display();

}