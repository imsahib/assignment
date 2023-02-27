#include<iostream>
using namespace std;
class Complex
{
    private:
            int real, img;
    public:
            Complex()
            {
                real=0; img=0;
            }
            void set_data(int x,int y)
            {
                real=x;
                img=y;
            }
            void show_data()
            {
                cout<<endl<<"real: "<<real<<" img: "<<img<<endl;
            }
           Complex add(Complex c)    
           {
                Complex temp;
                temp.real= real+c.real;
                temp.img= img+c.img;
                return temp;  // return by object
           }
};
int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,5);
    c2.set_data(5,8);
    c1.show_data();
    c2.show_data();
    //c3=c1+c2;
    c3=c1.add(c2);// call by object
    c3.show_data();
    return 0;


}