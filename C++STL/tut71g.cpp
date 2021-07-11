//iterator lower_bound and upper_bound
/*
vector<int> v{1, 3, 6, 6, 8};
vector<int>::iterator lower1, lower2, lower3;
lower1 = lower_bound(v.begin(), v.end(), 4); // Index will be 2
lower2 = lower_bound(v.begin(), v.end(), 1); // Index will be 0
lower3 = lower_bound(v.begin(), v.end(), 9); // Index will be 5
// To get the index do: lower1 - v.begin();
cout<<"lower_bound for element 4 at position : "<<lower1 - v.begin()<<endl; // 2

vector<int> v{1, 3, 6, 6, 8};
vector<int>::iterator upper1, upper2, upper3;
upper1 = upper_bound(v.begin(), v.end(), 6); // 4
upper2 = upper_bound(v.begin(), v.end(), 1); // 1
upper3 = upper_bound(v.begin(), v.end(), 4); // 2
// To get the index do: upper1 - v.begin(); 
cout<<"upper_bound for element 6 at position : "<<upper1 - v.begin()<<endl; //4
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
        int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    for(int i = 0; i < q; i++){
        int x;
        cin>>x;
        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        cout<<idx<<endl;
    }

    return 0;
}