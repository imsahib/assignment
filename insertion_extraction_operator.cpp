#include<iostream>
using namespace std;
class Person
{
    private:
        int p;
        friend ostream & operator<<(ostream &,Person);
        friend istream & operator>>(istream&,Person&);
    public:

     Person()
        {
            cout<<"default"<<endl;
            p=0;
        }
        Person(const Person &myperson)
        {
            p=myperson.p;
        }
        Person(int myperson)
        {
            p=myperson;
        }

        void display()
        {
            cout<<"p="<<p<<endl;
        }

};

ostream& operator<<(ostream &os,Person myperson)
{
    cout<<"person age :"<<myperson.p<<endl;
    return cout;
}
istream & operator>>(istream&is,Person &myperson)
{
    cout<<"Enter person age";
    cin>>myperson.p;
    return cin;
}

int main()
{
    Person p1,p2(4),p3(8),p4;
    cout<<p2;
    cout<<p1<<p2<<p3;
    cin>>p4;
    p4.display();
    return 0;
}
