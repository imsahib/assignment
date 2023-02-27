#include<iostream>
using namespace std;
class Array
{
    private:
         int a[100];
         const int size=100;
    public:
        Array()
        {

        }
        void setArray(int n,int index)
        {
            a[index]=n;
        }
        int operator[](int index)
        {
            return a[index];
        }
        void display(int index)
        {
            cout<<a[index]<<endl;
        }
       Array operator()(int a,int b,int c)
       {
        
       }
};
int main()
{
    Array b;
    b.setArray(5,10);
    b.display(10);
    cout<<b[10];

}