/*
sort one array according to other array:

You are given two arrays a[] (integer) and b[] (char). 
The ith value of a[] corresponds to the ith value of b[]. Sort the array b[] with respect to a[].

Input:
a[] = {3, 1, 2}
b[] = {'G', 'E', 'K'}
Output:
E K G
Explanation: Here 3 corresponds to G,
1 corresponds to 'E', 2 corresponds to 'K'
Your task is to complete the function sortArray() which takes two array as input 
and sorts the second array with respect to the first array. 
The function prints the second array space separated. The new line is given by the driver's code.
*/
#include<bits/stdc++.h>
using namespace std;
void sortArray(int arr1[],char arr2[],int n){
    vector<pair<int,char>>v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr1[i],arr2[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    char arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sortArray(arr1,arr2,n);
    cout<<endl;
    
}