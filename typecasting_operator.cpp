#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
    private:
        int rupee;
    public:
       int getR()
        {

            return rupee;
        }
        Rupee()
        {
            cout<<endl<<"default";
            rupee=0;
        }
        Rupee(int r)
        {
            cout<<endl<<"parametrized constructor called rupee";
            rupee=r;
        }
        ~Rupee()
        {
           // cout<<endl<<"destructor";

        }
        void setRupee(int r)
        {
            rupee=r;
        }
        void showRupee()
        {
            cout<<endl<<"Rupee is "<<rupee;
        }

        operator int()
        {
            return rupee;
        }

};

class Dollar
{
        private:
        int dollar;
    public:
        Dollar(Rupee r)
        {
            cout<<endl<<"i'm called";

            dollar= r.getR()/70;
            
        }
        Dollar()
        {
            cout<<endl<<"default";
            dollar=0;
        }
        Dollar(int d)
        {
            cout<<endl<<"parametrized constructor called of dollar";
            dollar=d;
        }
        ~Dollar()
        {
           // cout<<endl<<"destructor";

        }
        void setDollar(int d)
        {
            dollar=d;
        }
        void showDollar()
        {
            cout<<endl<<"Dollar is "<<dollar;
        }

        operator int()
        {
            return dollar;
        }

        operator Rupee()
        {
            return dollar*70;
        }

};

int main()
{
    Rupee myrupee=700,r1;
    r1=700;            // predefined to user defined
    myrupee.showRupee();
    r1.showRupee();
    cout<<endl;
    int x= r1;       // userdefined to pre defined
    cout<<endl<<"my rupee is "<<x;
    cout<<endl;

    Dollar mydollar=8,d1;
    d1=32;
    mydollar.showDollar();
    d1.showDollar();
    cout<<endl;
    int y= d1;
    cout<<endl<<"my dollar is "<<y;

// Dollar to Rupee
    myrupee=mydollar;  // userdefined to userdefined
    myrupee.showRupee();

// Rupee to dollar
    mydollar=(Dollar)r1;
    mydollar.showDollar();
    return 0;
}
