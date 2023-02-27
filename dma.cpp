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
};


int main()
{
   int *p= (int*)malloc(sizeof(int));

   int *p= new int;
   int *p;
   p=new int;
   float *q= new float[5];
   delete p;
   delete[] ptr;


}