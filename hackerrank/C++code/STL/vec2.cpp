//VECTOR:Erasing element and sorting in ascending order

// vector<int>v; (creates an empty vector of integers)
// vector<int>v(10); (creates an integer vector of size 10)
// vector<int>v(10, 0); (creates an integer vector of size 10, containing 0)
// Removes the element present at position.
// Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
// erase(int start,int end):
// Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
// Ex: v.erase(v.begin()+2,v.begin()+5); (erases all the elements from the third element to the fifth element.)

/************/
// First line of the input contains an integer N denoting the number of integers.
// Second line contains N space-separated integers. 
// Third line contains an integer X denoting the index(0-based) of the N integers which needs to be deleted.
// Your task is to print the N-1 integers in sorted order (ascending). Each integer in a new line.

#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int del;
    cin>>del;
    v.erase(v.begin()+del);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}