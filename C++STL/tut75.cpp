#include<bits/stdc++.h>
using namespace std;
//nesting in sets and maps
int main(){
    map<pair<int,int>,int> m;//comparision
    pair<int,int> p1,p2;
    p1={1,2};
    p2={2,3};
    cout<<(p1<p2)<<endl;

    map<set<int>,int> m1;
    set<int>s1={1,2,3};
    set<int>s2={2,3};
    cout<<(s1<s2)<<endl;

    map<pair<string,string>,vector<int> >m;
    


}