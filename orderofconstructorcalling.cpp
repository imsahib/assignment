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
            cout<<"copy constructor by"<<endl;
            p=myperson.p;
        }
        void display()
        {
            cout<<"p="<<p<<endl;
        }
        Person operator+(Person myperson)
        {
            cout<<"operator+"<<endl;
            Person temp;
            temp.p= p+myperson.p;
            return temp;
        }

};
int main()
{
    Person p1(3),p2(5),p3;
    Person p4=p1+p2;
    p1.display();
    p2.display();
    p4.display();
    return 0;
}