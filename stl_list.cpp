#include<iostream>
#include<list>
using namespace std;
int main()
{
    // declaration
    list<int>l1;  // empty list
    list<int>l2{11,33,12,98};
    list<string>l3{"delhi","chd","shimla"};

    //functions
    /*
        sort()
        size()
        push_back()
        push_front()
        pop_back();
        pop_front();
        reverse();
        remove();
        clear();
        ** no subscript operator work here**
        with help of iterator we can access all elements
    */
    //cout<<endl<<l3.size();
    //cout<<endl<<l1.size();
    l1.push_back(123);
    l1.push_front(12);
    l2.sort();
    l2.reverse();
    l2.remove(12);
    // iterate
    list<int>:: iterator p=l2.begin();
    while(p!=l2.end())
   {
       cout<<*p<<" ";
       p++;
   }




}
