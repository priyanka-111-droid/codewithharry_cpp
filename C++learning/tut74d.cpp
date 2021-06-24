//multiset
//using red black trees
//duplicates allowed
//used instead of priority queues

#include<bits/stdc++.h>
using namespace std;


void print(multiset<string> &s){
    cout<<s.size()<<endl;
    for(string value:s){
        cout<<value<<endl;
    }
}
int main(){
    multiset<string> s;
  
    s.insert("abc");//o(log n)
    s.insert("def");

    s.insert("ghj");

    s.insert("lmn");

    s.insert("abc");
    // auto it=s.find("abc"); //o(logn)
    // if(it!=s.end()){
    //     s.erase(it);
    // } 
    //deletes first abc

    s.erase("abc");
    //deletes all abc
    print(s);



}