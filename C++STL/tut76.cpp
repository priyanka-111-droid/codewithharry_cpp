/*stacks and queues
stack:
->used in balanced parenthesis,next greater element
->LIFO
->push,pop,top
queues:
->used in graphs
->FIFO
->push,pop,front
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s; //stack of ints
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;//see top element
        s.pop();//remove top element
    }

    queue<string>q; //queue of ints
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("pqr");
    q.push("xyz");
    q.push("lmn");
    while(!q.empty()){
        cout<<q.front()<<endl;//frontmost element
        q.pop();
    }

}