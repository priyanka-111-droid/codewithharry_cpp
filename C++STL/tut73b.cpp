/*
given N strings,print unique strings
in lexicographical order
with frequency
N<=10^5
|S|<=100
*/
//map value  unique
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    map<string,int> m;
    int count=0;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}