#include<iostream>
using namespace std;
class Complex
{
    private:
        int real, img;
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex);
        friend Complex operator+(int x, Complex c);
    public:
        Complex()    // Non parametrized constructor
        {
                real=0;
                img=0;
        }
        Complex( int x, int y)
        {
            real=x; img=y;
        }
        Complex operator+(int x)
        {
                Complex temp;
                temp.real= real + x;
                temp.img= img + x;
                return temp;
        }
        void display()
        {
            cout<<"\nreal="<<real<<" img="<<img;
        }

};
Complex operator+(int x, Complex c)
{
    Complex temp;
    temp.real= c.real + x;
    temp.img= c.img + x;
    return temp;

}
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real+ y.real;
    temp.img=x.img+ y.img;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.real= -X.real;
    temp.img=  -X.img;
    return temp;
}
int main()
{
    Complex c1(3,5),c2(2,8),c3,c4,c5;
    c3= c1+c2;
    c4=-c3;
    c5= c1+7;
    c5= 7+c5;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    return 0;
}
