//custom comparators
/*
bool comp(pair<int, int> a, pair<int, int> b) { 
    // Compare on basis of roll number 
    if (a.second < b.second) { 
        return true; 
    } 
    return false; 
}

int main(){
    vector<pair<int, int> > A;
    A.push_back(make_pair(10, 5));
    A.push_back(make_pair(20, 25));
    A.push_back(make_pair(18, 18));
    A.push_back(make_pair(25, 4));
    // Sort using comparator, it will sort the array in ascending order of second value
    sort(A.begin(), A.end(), comp);
    for(int i = 0; i < A.size(); i++){
        cout<<A[i].first<<" "<<A[i].second<<endl;
    }
    return 0;
}
*/
/*
You are given a function sortArray which takes an array of pairs, sort the given array in ascending order of their sum.
*/
bool sum(pair<int,int>a,pair<int,int>b){
    if((a.first+a.second)<(b.first+b.second)){
        return true;
    }
    return false;
}

void sortArray(vector<pair<int, int>> &A){
    sort(A.begin(),A.end(),sum);

}