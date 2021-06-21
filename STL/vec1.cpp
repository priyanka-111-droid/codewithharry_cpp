//hackerrank
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printData(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,ele;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++){
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    printData(v);   
    return 0;
}
