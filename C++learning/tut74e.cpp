//hackerearth
//multiset
//monk and candy
//10^9 is int limit
//set last element is max
//if sets,no duplicates poss so we need multiset

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;
        for(int i=0;i<n;i++){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        //k min,k bag
        long long total_candies=0;
        for(int i=0;i<k;i++){
            auto last_it=(--bags.end());
            int candy_ct=*last_it;
            total_candies+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
        cout<<total_candies<<endl;
    }


   
}