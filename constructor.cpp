#include<iostream>
using namespace std;
class Example
{
    private:
        int a,b,*p=NULL;
    public:
        Example()   // default constructor
        {                                                       

        }
         
        Example(int x)
        {
            cout<<"hello\n"
            a=x;
            b=0;
        } 
                       
        Example(int x,int y)     // parametrized constructor   constructor overloading     
        {
            a=x;
            b=y;
            int *p= (int*) malloc(sizeof(int));
            *p=y;
        }  
        void display()
        {
            cout<<"a="<<a<<" b="<<b ; //  (*p);
        }
        Example(const Example &e)
        {
            a=e.a;
            b=e.b;
            p= (int*)malloc(sizeof(int));
           *p= *(e.p);
        }
        ~Example()
        {
            free(p);
        }
};
int main()
{
    Example e1(1,7),e2(3,5),e4,e9(3.8);
    //Example e6= Example(3,5);
    Example e3=e1;   // Example e3(e1);
    e4=e2;          // Assignment operator
    e2.display();
}