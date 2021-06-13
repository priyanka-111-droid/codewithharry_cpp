// to read /write from classes,use C++ prefedined classes
/*useful classes for working with files:
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase

In order to work with files in C++,you will have to open it.There are 2 ways to do so:
1.using constructor
2.using member function open() of class.
*/
#include<iostream>
#include<fstream> //header file for classes
using namespace std;

int main()
{
    string st="Harry bhai";
    string st2;
    //opening files from constructor and writing it
    ofstream out("sample60.txt");//out obj will open sample60.txt,help us write in it
    out<<st;  //like cout

    //opening files from constructor and reading  it
    // ifstream in("sample60b.txt");//reading it
    // in>>st2;  //gives only word before space or enter
    // getline(in,st2);
    // cout<<st2;

    return 0;
}