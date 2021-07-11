//maps part 2(unordered)
//use this for less time comp
/*
1.inbuilt implementation->hash table
2.time complexity
3.valid keys datatype

*/
#include<bits/stdc++.h>
using namespace std;


void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){//pair
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}


int main(){
    unordered_map<int,string> m;//key,value

    //unordered_map
    // unordered_map<int,int>,string >m; not work
    
    m[1]="abc";//O(1)
    m[5]="cdc";
    m[3]="xyz";
    m[5]="pqr";//now this value gets assigned
    m[6];//value is null string
    m.insert({4,"afg"});


    print(m);

    auto it=m.find(7); //O(1)


}