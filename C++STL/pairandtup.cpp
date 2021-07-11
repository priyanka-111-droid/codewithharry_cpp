//maximum and min of vector and store in pair
//using tuples

#include<bits/stdc++.h>
using namespace std;

pair<int, int> findMaxMin(vector<int> &A){
    // sort(A.begin(),A.end());
    // First value of pair will be Maximum of array A and second will be Minimum of array A
    pair<int,int>p;
    p.first=*max_element(A.begin(), A.end());
    p.second=*min_element(A.begin(), A.end());


    return p;

}

tuple<int, int, int> compute(vector<int> &A){
    // First value of tuple will be sum of array A
    // Second value of tuple will be sum of even values in array A 
    // Third value of tuple will be sum of odd values in array A
    int s1,s2,s3;
    s1=s2=s3=0;
    for(int i=0;i<A.size();i++){
        s1=s1+A[i];
        if(A[i]%2==0){
            s2=s2+A[i];
        }
        else{
            s3=s3+A[i];
        }
    }
    tuple<int,int,int>tup=make_tuple(s1,s2,s3);
    return tup;

    
}


int main()  {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    
    pair<int, int> max_min = findMaxMin(A);
    cout<<max_min.first<<" "<<max_min.second<<endl;
    
    tuple<int, int, int> tuple_values = compute(A);
    cout<< get<0>(tuple_values) << " " << get<1>(tuple_values) << " " << get<2>(tuple_values) << endl;
    
    return 0;
}

