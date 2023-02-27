#include<iostream>
using namespace std;
class Ruppee;
class Dollar
{
    private:
        int dollar;
    public:
        Dollar()
        {
            cout<<"\nI'm in Dollar class default constructor"<<endl;

        }
        Dollar(int d)
        {
            cout<<"\nI'm in Dollar class Parametrized constructor"<<endl;
            dollar=d;
        }

      //  operator Ruppee()
        //{
         //   return (dollar *60);
        //}
        operator int()
        {
          return dollar;
        }
        void display()
        {
            cout<<"Dollar = "<<dollar<<endl;
        }
};
class Ruppee
{
    private:
        int ruppee;
    public:
        Ruppee()
        {
             cout<<"\nI'm in Ruppee class default constructor"<<endl;
        }
        Ruppee(int x)
        {
             cout<<"\nI'm in Ruppee class Parametrized constructor"<<endl;
             ruppee=x;
        }
        operator int()
        {
          return ruppee;
        }


        void display()
        {
            cout<<"ruppee = "<<ruppee<<endl;
        }
};
int main()
{
   //1  type : predefined to userdefined
    Ruppee r1,r2;
    Dollar d1,d2;
    r1= 500;
    r1.display();
    d1= 700;
    d1.display();
   //2  type : userdefined to predefined
    int x= (int)d1;
    int y= (int)r1;
    cout<<" value of x = "<<x<<" and y= "<<y<<endl;
    // 3 type : userdefined to userdefined
//    d2=r1;
 //   d2.display();
 //   r2= d1;
   // r2.display();

}
