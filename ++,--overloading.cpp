#include<iostream>
using namespace std;
class Person
{
    private:
        int p;
    public:
        Person()
        {
            cout<<"default"<<endl;
            p=0;
        }
        Person(int x)
        {
            cout<<"Parametrized"<<endl;
            p=x;
        }
        Person(const Person &myperson)
        {
            cout<<"copy constructor"<<endl;
            p=myperson.p;
        }
        void display()
        {
            cout<<"p="<<p<<endl;
        }

};
int main()
{
    Person p1(3),p2(5),p3;
    p3=p1+p2;
    p1.dispaly();
    p2.display();
    p3.display();
    return 0;
}