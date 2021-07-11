/*
Corresponding pair:
Input Format: The input line contains T, number of testcases. 
Each testcase contains three lines. The first line contains N size of both arrays. 
The second and third line contains elements of two arrays separated by space.

Output Format: For each testcase, in a new line, you have to return an array of pairs formed with given arrays.

User task: You need to complete the function corresp_Pair(arr1,arr2,N,res) 
containing 4 parameters respectively.

Sample Input:
2
5
1 2 3 4 5
6 7 8 9 10
2
1 2
3 4

Sample Output:
(1,6) (2,7) (3,8) (4,9) (5,10)
(1,3) (2,4)
*/
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> corresp_Pair(int arr1[],int arr2[],int n,pair<int,int>res){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        res=make_pair(arr1[i],arr2[i]);
        v.push_back(res);
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    vector<vector<pair<int,int>>>vfinal;
    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        pair<int,int>res;
        vector<pair<int,int>>temp=corresp_Pair(arr1,arr2,n,res);
        vfinal.push_back(temp);
    }
    for(int i=0;i<vfinal.size();i++){
        for(int j=0;j<vfinal[i].size();j++){
            cout<<"("<<vfinal[i][j].first<<" "<<vfinal[i][j].second<<")"<<" ";
        }
        cout<<endl;
    }
}
