//balanced parenthesis using stack-Hackerrank
//does each bracket have corresponding bracket?
/*
opening bracket put in stack
for closing bracket,check does it have corresponding open bracket in stack?
*/
#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isBalanced(string s){
    stack<char> st;
  for(char bracket:s){
      if(symbols[bracket]<0){
          st.push(bracket);
      }else{
          if(st.empty())return "NO";
          char top=st.top();
          st.pop();
          if(symbols[top]+symbols[bracket]!=0){
          return "NO";
          }
      }
  }
  if(st.empty()) return "YES";
  return "NO";  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}