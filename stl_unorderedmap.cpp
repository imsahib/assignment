#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    // declaration
    unordered_map<string,int> menu;
    // initialization
    unordered_map<string,int> {{"good morning",10},{"a vry good morning",2},{"nothing",200},{"shubh prabhat",0}};
    // insert values
    menu["maggie"]=80;
    menu["pizza"]=199;
    menu["dosa"]=100;
    menu["ice cream"]=30;
    menu["cold drink"]=40;
    cout<<endl<<menu["pizza"]<<endl;

    // search
    string item;
    cout<<endl<<"enter element to search in menu"<<endl;
    cin>>item;
    if(menu.count(item)==0)
        cout<<endl<<"not available"<<endl;
    else
        cout<<endl<<"item present"<<endl;

    // update

    menu["pizza"]*=1.15;
    cout<<menu["pizza"];
    // deletion
   // menu.erase("pizza");
    cout<<endl<<endl;

    // iterate
    for(pair<string,int>item:menu)
        cout<<item.first<<" -----"<<item.second<<endl;
}
