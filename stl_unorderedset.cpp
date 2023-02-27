#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int key;
    // declaration
    unordered_set<int> s;
    // initialization
    unordered_set<int> s1{12,98,78,32};
    cout<<"enter key"<<endl;
    cin>>key;
    // to search
    if(s1.find(key)!=s1.end())
        cout<<"key is present"<<endl;
    else
        cout<<"not found"<<endl;

    // iterate all the elements
    for(auto x:s1)
        cout<<x<<endl;
    // delete an element
    s1.erase(12);
    // insert an element
    s1.insert(155);
    cout<<endl;

}

