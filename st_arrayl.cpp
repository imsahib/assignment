#include<iostream>
#include<array>
using namespace std;
int main()
{
    // decalaration
    array<int,6> arr1;  // array<array_type, size> array_name;
    // initialization
    array<int,6> arr2={2,7,0,8,6,8};
    array<int,5>arr3={3,7,9};
    cout<<endl<<arr1[5];
    cout<<endl<<arr2[4];
    cout<<endl<<arr3[4];
    cout<<endl<<arr3.front();
    cout<<endl<<arr3.back();
    arr1.fill(100);
    cout<<endl<<arr1.front();
    cout<<endl<<arr1.back();
    arr2.swap(arr1);   // type and size should be same.
    cout<<endl<<arr3.size();
    int *p=arr2.begin();
    int *q=arr2.end();
    cout<<"\nstarting value is"<<*p;
    cout<<"\nending value is"<<*q;
    cout<<endl;
    // access all the elements
    for(int i=0;i<arr2.size();i++)
        cout<<arr2[i]<<"  ";
    cout<<endl;
    // another way by for each loop
    for(int x: arr2)
        cout<<x<<"  ";



}
