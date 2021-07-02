/*
Given two elements X and Y. The task is to return the pair formed with given elements

Input Format: The input contains T, number of testcases. 
Each testcase contains one line of input containing X and Y separated by space.

Output Format: For each testcase, in a new line, you need to print the elements of pair formed.

User Task: You need to complete the function makePair(X, Y) that takes two numbers as parameters
and returns a pair of these number. The first number is the first member of pair 
and second number is the second member. The printing is done by the driver code.
*/
#include<bits/stdc++.h>
using namespace std;
pair<int,int> makepair(int x,int y){
    return pair<int,int>(x,y);
   
}
int main(){
    int t;
    cin>>t;
    vector<pair<int,int>>v;
    while(t--){
        int x,y;
        cin>>x>>y;
        pair<int,int>temp=makepair(x,y);
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
     }
}