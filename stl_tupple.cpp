#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    // declaring tuple
    tuple <int,string,string> t1;
    // assigning tuple
    t1=make_tuple(1,"cpp","stl");
    // display
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";

}
