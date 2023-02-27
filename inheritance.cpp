#include<iostream>
using namepsace std;
// single inheritance
class A
{
    private:
    protected:           // visibility modes 
    public:

};
class B : public A     // Derived_class : visibility mode Base_Class
{

};
// multilevel inheritance
class A
{

};
class B: public A
{

};
class C: public B
{

};
// multiple inheritance
class A
{

};
class B
{

};
class C: public A, public B
{

};
// Herarichal Inheritance
class A
{

};
class B: public A
{

}
class C : public A
{

}
// HYBRID
class A
{
    private:
    protected:           // access specifiers
    public:
    A()
    {

    }

};
class B :public A   // visibility mode
{
    public:
    
    B() : A()
    {

    }

};
class C: public A
{

}
class D:public B,public C
{

}



