//iterators
//like pointers
//point to STL containers
//vectors have indices so we can use those to access it
//but for containers without indices,use iterators
//lets say iterator it
//.begin() points to first ele
//.end() points to after last ele

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<endl;
    // vector<int> v={1,2,3,4,5,6};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // vector <int> :: iterator it=v.begin();
    // // cout<<(*(it+1));
    // for ( it = v.begin(); it!=v.end(); ++it){
    //     cout<<(*it)<<endl;
    // }
    //it++->next iterator
    //it+1->next location
    //for vectors does not matter as next it and loc same coz continuous memory

    //for maps and sets,not cont memory,it+1 gives invalid location
    //ONLY it++  works for these guys
    vector<pair<int,int> > v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int> > :: iterator it;

    for (it = v_p.begin(); it !=v_p.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    //other way to write iterator
    for (it = v_p.begin(); it !=v_p.end(); ++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }



}
