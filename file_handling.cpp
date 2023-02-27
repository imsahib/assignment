#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // program variable->  file insert:   output stream.     ofstream
    // file->program variables:           input stream.      ifstream

    ofstream fout;
    string s;
    fout.open("G:/Online Classes/C++/File Handling/myfile.txt",ios::app);
    if(!fout)
        cout<<endl<<"File is not opened";
    else
    {
        cout<<endl<<"Enter data"<<endl;
        getline(cin,s);
        fout<<" "<<s;
        cout<<"\nData is entered!"<<endl;
    }
    fout.close();
    ifstream fin;
    string buffer;
    fin.ignore();
    fin.open("G:/Online Classes/C++/File Handling/myfile.txt");

    while(!fin.eof())
    {
       
       getline(fin,buffer);
        cout<<buffer;
    }
    fin.close();
    cout<<"\n read successful";

    return 0;

}
