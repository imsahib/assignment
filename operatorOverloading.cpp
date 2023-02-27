#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
    Complex()
    {

    }
    Complex(int x,int y)
    {
        a=x; b=y;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a= a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a= -a;
        temp.b= -b;
        return temp;
    }
    void showdata()
    {
            cout<<"real="<<a<<" img="<<b<<endl;
    }
};
int main()
{
    Complex c1(3,7),c2(2,6),c3;
    //c3= c1.add(c2);
    c3= c1+c2;
    //c3= c1.operator+(c2);
    c3= -c1;  // c3= c1.operator-(c2);



}