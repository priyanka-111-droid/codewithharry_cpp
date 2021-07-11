//C++ STL:pairs
/*
pairs:
class in c++ stl,stores 2 values.
stored in utility header
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    // p=make_pair(2,"abc");
    p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> p1=p;//copy
    p1.first=3;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,string> &p2=p;  //by reference,original pair CHANGES TOO
    p2.first=4;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    //Array of pairs
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for (int i = 0; i < 3; i++)
    {
      cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    
}