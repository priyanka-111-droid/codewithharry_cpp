
//using unordered sets
//input N strings,q queries,if present print yes

#include<bits/stdc++.h>
using namespace std;



int main(){
    unordered_set <string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);

    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

}
/*
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc
ghj
abcdef
*/