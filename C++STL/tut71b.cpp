//vectors
//size can be changed
//remember
//once u make copy of vector,changes made in other vector NOT reflected in original vector
//if passed by reference,changes made in vector in other function reflected in original vector
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v1){
    cout<<v1.size()<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        //v1.size()->O(1)
       cout<<v1[i]<<" ";
    }
    v1.push_back(2);
    cout<<endl;
}

int main(){
    int a[10]; //10 block emmory reserved,cannot be altered
    // vector<int> v;//now size 0
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);//adds at end O(1)

    // }

    vector<int> v1(3,1);
    v1.push_back(22);
    v1.push_back(12);
    v1.push_back(35);
    v1.push_back(99);
    // cout<<"Before changes"<<endl;
    // printVec(v1);

    vector<int> v2=v1;  //copy vector UNLIKE VECTOR,O(n)
    //array pointers copy
    //and if u change one array,it gets reflected in other array

    // printVec(v2);
    // cout<<"after changes"<<endl;
    v2.push_back(10);
    printVec(v1); //2 being added to vector in printVec function
    printVec(v1); //not reflected here
    printVec(v2);
}