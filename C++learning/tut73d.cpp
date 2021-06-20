/*
given N strings and Q queries,
in each query,you are given a string
print freq of string

N<=10^6
|S|<=100
Q<=10^6
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    unordered_map<string,int> m;
 
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        m[s]++;
    }
   int q;
   cin>>q;
   while(q--){
       string s;
       cin>>s;
       cout<<m[s]<<endl;
   }
}