#include<iostream>
using namespace std;
class Person
{
    private:
        int p;
        friend  ostream & operator<<(ostream &,Person);
        friend istream & operator>>(istream&,Person&);
    public:
        Person()
        {
            cout<<"default"<<endl;
            p=0;
        }
        Person(int myperson)
        {
            cout<<"parametrized"<<endl;
            p=myperson;
        }
        Person operator++()     // prefix
        {
            cout<<"prefix"<<endl;
            Person temp;
            temp.p=++p;
            return temp;
        }
        Person operator++(int)  // postfix
        {
            cout<<"postfix"<<endl;
            Person temp;
            temp.p=p++;
            return temp;
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
    cout<<"Enter person age\n";
    cin>>myperson.p;
    return cin;
}

int main()
{
    Person p1(10),p2(4),p3(8),p4(6);
    cout<<endl;
    (p2++).display();  //4
    cout<<endl;
    (++p2).display();   //6
    cout<<endl;
     Person p5=++p2;
    cout<<p2;
    cout<<p1<<p2<<p3;
    cin>>p4;
    cout<<p4;
}
