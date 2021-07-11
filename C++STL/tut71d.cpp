#include<bits/stdc++.h>
using namespace std;

// void printVec(vector<pair<int,int> > &v1){
    void printVec(vector<int> &v1){
    cout<<v1.size()<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        //v1.size()->O(1)
    //    cout<<v1[i].first<<" "<<v1[i].second<<endl;
    cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //VECTOR OF PAIRS
    // vector<pair<int,int> >v={{1,2},{2,3},{4,5}};
    //every element of vector will be pair
    //for input

    // vector<pair<int,int> >v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     // v.push_back({x,y});
    //     v.push_back(make_pair(x,y));
    // }
    // printVec(v);

    /**************************************************************************/
    //ARRAY OF VECTORS (like 2D arrays,no of rows fixed,columns dynamic)
    // int N;
    // cin>>N;
    // vector<int> v[N];//10 vectors of size 0,v 1 is vector,v 2 is vector
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin>>n;
    //     //that individual vector
    //     for (int j = 0; j < n;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
        
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }
    // cout<<v[0][0];//0th vector,0th ele gives 1
    /*input:
    3
    3
    1 2 3
    3
    3 4 5
    2
    1 2
    */   
   /*************************************************************************/
   //VECTOR OF VECTORS(no of rows And columns dynamic)
    vector<vector<int> >v; // v[0] is a vector
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        //that individual vector
        for (int j = 0; j < n;j++)
        {
            int x;
            cin>>x;
            // v[i].push_back(x); //wrong as nothing in vector.
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    //  for (int i = 0; i < v.size(); i++)//no need for N
    // {
    //     printVec(v[i]);
    // }
    // v[1].push_back(38);
    v.push_back(vector<int> (2));
    for (int i = 0; i < v.size(); i++)//no need for N
    {
        printVec(v[i]);
    }

}