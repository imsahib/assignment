#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // declaration
    vector<int> v1;
    vector<int> v3(5);
    // initialization
    vector<int> v2={1,0,12,3};
    vector <int> v4(5,6);
    vector<string>v5(3,"i'm vector ");
    // display
    //cout<<v5[0];
    v1.push_back(10);
    v1.push_back(20);
    v3.push_back(17);
    v2.push_back(12);
    v4.push_back(18);
    v5.push_back("i'm pushing value function");
    //cout<<v1[0]<<endl;
    cout<<v4.size()<<endl;
  //  cout<<v5.capacity()<<endl;
    cout<<v5[3]<<endl;
    /*
    []
    at
    front
    back
    push_back
    pop_back
    size    // number of elements in an array
    capacity // capacity of an array
    clear
    */
    // iterate all elements
    cout<<endl<<endl;
    for(int i=0;i<v4.size();i++)
        cout<<v4[i]<<" ";
    cout<<endl;
    // iterate by for each loop
    for(int j:v4)
        cout<<j<<" ";
    cout<<endl;

    // accessing all elements
    vector<int> ::iterator i1=v4.begin();
    v4.insert(i1+1,35);
     for(int j:v4)
        cout<<j<<" ";
    cout<<endl;

    // vector of vector


        //declaration
    vector<vector<int>>vvarr;
    // initialisation
    vector<vector<int>>vrr={{1,2,3}, {4,5,6}, {7,1,4}, {0,1,3,4,5,6,7,8}};
    // to iterate
    cout<<endl;
    for(int i=0;i<vrr.size();i++)
    {
       for(int number=0;number<vrr[i].size();number++)
           cout<<vrr[i][number]<<" ";

    }
    // assignment
      vvarr.push_back({2,4,8});
      vvarr.push_back({1,0});
      // update
      vvarr[0][0]+=10;
    cout<<endl;
    // by for each loop
   for(int i=0;i<vvarr.size();i++)
    {
       for(int number : vvarr[i])
            cout<<number<<" ";
    }



}

