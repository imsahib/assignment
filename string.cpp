#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    string s1="hello buddy , how are you"; // string(char *str)  function call
    int i=0;
    while(s1[i])
    {
        cout<<s1[i];
        i++;
    }


}