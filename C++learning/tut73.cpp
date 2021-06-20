//STL MAPS part1(only maps)
//maps:maps,unordered maps,multimaps(not that imp)
//normal map:sorted order mein store hoti hai key and value->internally red black tree
//also note,one key can't have >1 value,unique keys
//unordered:not in sorted order

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    //O(n)
    // Accessing values through iterator is a O(1) operation as
    // iterator has address of the value and access value at 
    // some address if you know the address is a unit time operation.
    // Now when we traverse the map, we start from m.begin() 
    // and are doing it++ in each step, it++ is also O(1) ,
    // so whole map traversal is O(1) only.we are not using
    // iterators but internally that only is happening, pr 
    // is the value at address pointer by iterator, internally
    // range based loops is also iterating through maps using
    // iterators and then providing us reference to to the value at that address.


    // But when you want to directly access some specific value in map using m[key] 
    // or m.find(key), these are log(n) operations as log(n)time is taken by map to search this key.

    for(auto &pr:m){//pair
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}


int main(){
    map<int,string> m;//key,value
    //inserting key-value->O(log n)
    m[1]="abc";
    m[5]="cdc";
    m[3]="xyz";
    m[5]="pqr";//now this value gets assigned
    m[6];//value is null string
    m.insert({4,"afg"});
    // map<string,int> :: iterator it;
   

    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // //direct printing
    // print(m);

    auto it=m.find(7); //O(log(n))
    // if(it==m.end()){
    //     cout<<"No value";
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // m.erase(1);
    if(it!=m.end())
    m.erase(it); //delete pair
    m.clear();

    print(m);

}