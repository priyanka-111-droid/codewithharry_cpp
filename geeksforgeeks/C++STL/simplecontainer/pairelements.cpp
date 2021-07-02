/*Pairing elements:
Input Format: The input line contains T, denoting the number of testcases.
For each testcase there will be two lines. 
The first line contains size of array N, second line contains elements of the array separated by space.

Output Format: For each testcase,in a new line, you need to print the pairs formed 
as such (arr[0],arr[N-1]) (arr[1],arr[N-2]), and so on in new line.

User task: Your task is to complete the function array_of_Pairs(arr, N) containing array 
and size of array as arguments.You don't have to worry about the input. 
Finally return the a vector of pairs formed. The printing is done by the driver code.

Sample Input:
2
5
1 2 3 4 5
4
4 2 3 1

Sample Output:
(1,5) (2,4) (3,3)
(4,1) (2,3)
*/
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> vector_of_pairs(vector<int> v,int n){
    vector<pair<int,int>>v1;
    vector <int> :: iterator it=v.begin();
    vector <int> :: iterator it1=v.end()-1;
    for ( it = v.begin(); it!=v.end()-(n/2); ++it,--it1){
        // cout<<(*it)<<" "<<(*it1)<<endl; 
        v1.push_back(make_pair((*it),(*it1)));
    }
    return  v1;
}
int main(){
    int t;
    cin>>t;
    vector<vector<pair<int,int>>>vfinal;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<pair<int,int>>temp=vector_of_pairs(v,v.size());
        vfinal.push_back(temp);
        
        // for(int i=0;i<temp.size();i++){
        //     cout<<temp[i].first<<" "<<temp[i].second<<endl;
        // } 
    }
    for(int i=0;i<vfinal.size();i++){
        for(int j=0;j<vfinal[i].size();j++){
            cout<<"("<<vfinal[i][j].first<<" "<<vfinal[i][j].second<<")"<<" ";
        }
        cout<<endl;
    }
    
}

