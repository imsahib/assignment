#include<iostream>
#include<map>    // associative array
using namespace std;
int main()
{
    // declaration
    map<int,string> customer;
    map<int,string> person{{100,"hello"},{99,"hi"},{105,"namaste"},{101,"sat sri akal"},{109,"aslam walekum"}};
    // assignment
    customer[100]="Gurmeet Singh";
    customer[123]="Sahib";

    // iterate
    map<int ,string> ::iterator p=person.begin();
    while(p!=person.end())
    {
        cout<<endl<<p->first<<"  "<<p->second;
        p++;
    }
    /*
            at()
            []
            size()
            empty()
            insert()
            clear()

    */

     customer.insert(pair<int,string>(205,"saabi"));
     cout<<endl<<customer.at(205);
     // search
     int id;
        cout<<"\nenter person id"<<endl;
        cin>>id;
     if(person.count(id)==0)
        cout<<"\nnot exist"<<" ";
    else
        cout<<"\npresent";


}
