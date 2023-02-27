#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    private:
        char *a;
        int size;
    public:
        mystring()
        {
            cout<<"default"<<endl;
            a= (char*)malloc(sizeof(char)); 
            size=1;

        }
        mystring(char *str)
        {
            cout<<"string constructor called"<<endl;
            size=strlen(str);
            a=(char*)malloc(size+1);
            strcpy(a,str);
        }
        void change(char *str)
        {
            free(a);
            size=strlen(str);
            a= (char*)malloc(size+1);
            strcpy(a,str);

        }
        mystring(const mystring &s)
        {
            cout<<"copy constructor"<<endl;
            size=strlen(s.a);
            a= (char*)malloc(size+1);
            strcpy(a,s.a);
        }
        mystring& operator=(const mystring &s)
        {
            if(a==s.a)
                return *this;
            free(a);
            size=strlen(s.a);
            a=(char*)malloc(size+1);
            strcpy(a,s.a);
            return *this;
        }
        void display()
        {
            cout<<a<<endl;
        }
};
int main()
{
    mystring s1,s2="Sahib";
    mystring s3=s2;
    s2.display();
    s3.display();

}