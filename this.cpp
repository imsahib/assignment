#include<iostream>
using namespace std;
class Complex
{
    
     public:
        int real,img;
     public:
        Complex() :real(0),img(0)
        {
            
        }
        Complex(int x,int y) : real(x),img(y)
        {
           
        }
        void setData(int real,int img)
        {
           this->real=real; this->img=img;
        }
        void display()
        {
            cout<<endl<<"real="<<real<<" img="<<img;
        }
        Complex sumGreater(Complex c)
        {
            if(real+img > c.real+ c.img)
                return *this;
            else 
                return c;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(5,9);
    c2.setData(4,8);
    c1.display();
    c2.display();
    c3=c1.sumGreater(c2);
    c3.display();
    return 0;
}