//function objects or functor

#include<iostream>
#include<algorithm> //for sort
#include<functional>

using namespace std;

int main()
{
    //function object:Function wrapped in class so that it is available as object

    int arr[]={1,43,4,12,33,7};
    sort(arr,arr+5,greater<int>());//first 5 elements sorted
    //greater means descending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}