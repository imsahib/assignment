#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b;
        friend void myfriend();
    public:
    Item()
    {

    }
     
};
class Example
{
    public:
    void myfriend();
};
void Example :: myfriend()
{
    cout<<"hello"<<endl;
}
int main()
{
    Item i;
    Example e;
    e.myfriend();

}
