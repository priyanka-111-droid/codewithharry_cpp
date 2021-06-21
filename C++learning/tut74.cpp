#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){

    for(string value: s){
        cout<<value<<endl;
    }
    // for(auto it=s.begin();it!=s.end();++it){
    //     cout<<(*it)<<endl;
    // }
    
}

int main(){
    set <string> s;
    s.insert("abc"); //log(n)
    s.insert("pqr");
    s.insert("xyz");


   
    auto it=s.find("abc");
    // auto it=s.find("abcd");
    if(it!=s.end()){//else segmentation error 
        cout<<(*it);
    }
    s.erase("abc");//can erase iterator and string

     print(s);

 
}