// iterators in short(auto and range based loop)
//from C++ 11
#include<bits/stdc++.h>
using namespace std;


int main(){

    //RANGE BASED FOR LOOP
    vector<int> v={2,3,4,5,6,7};
    //copy of vector printed
    // for(int value:v){
    //     value++;
    // }

    //using references,now actual vector changed
    // for(int &value:v){
    //     value++;
    // }
    // cout<<endl;
    // for(int value:v){
    //     cout<<value<<" ";
    // }

    vector<pair<int,int> > v_p={{1,2},{2,3},{3,4}};
//    for(pair<int,int>&value:v_p){
//        cout<<value.first<<" "<<value.second<<endl;
//    }

    //AUTO
    auto a=1; //dynamically determines a's datatype,used in iterators
    // cout<<a<<endl;
    for(auto it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
    }
    for(auto &value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
}
