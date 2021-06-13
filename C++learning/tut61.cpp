//file I/O
//reading and writing to file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connecting file to priya_out stream(pipe jod do)
    //now data flows from program to file
    ofstream priya_out("sample61.txt");
    cout<<"Enter name";
    string name;
    cin>>name;

    //now taking data to file
    priya_out<<"My name is "<<name;
    //closing file,closing pipe between program and file 
    priya_out.close();

    ifstream priya_in("sample61.txt");
    string content;
    //file ka data is content mein la do
    // priya_in>>content;
    getline(priya_in,content);
    cout<<content;


    return 0;
}