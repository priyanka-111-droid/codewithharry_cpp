//C++ vectors

#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    //ways to create a vector

    vector<int> vec1;//zero length integer vector
    vector<char> vec2(4);//4 element charactor vector,not initialized
    // vec2.push_back('8');
    // vector<char> vec3(vec2); //4 element char vector from vec2
    vector<int>vec4(4,1);//4 element vector of 3s
    display(vec4);


    // int ele,size;
    // cout<<"Enter vector size:";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter element to add to this vector:";
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }


    // vec1.pop_back();
    // display(vec1);

    // vector<int> :: iterator iter=vec1.begin();
    // //point interator to first element
    // // vec1.insert(iter,566);
    // //to insert after first element
    // vec1.insert(iter+1,566);

    // display(vec1);

    return 0;
}
