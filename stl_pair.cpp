#include<iostream>
#include<utility>
using namespace std;
class student
{
private:
        int x,y;
public:

   student(int s,int a)
    {
        x= s;
        y=a;
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};
int main()
{
    student obj(2,4);
    // declaration
    pair<string,string> p1;
   // pair<int,student> p2;

    //assignment
   // p1=make_pair(1,"sahib");
    //p2=make_pair(1,obj);

    // dispaly
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
//    cout<<p2.first<<endl;
 //  student obj2=p2.second
   // obj2.display();


}
