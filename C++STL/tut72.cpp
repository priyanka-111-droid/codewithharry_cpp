#include<iostream>
#include<list>
using namespace std;

void display(list <int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end() ;it ++)
    {
        cout<<*it<<" "; //5
    }
    cout<<endl;
}

int main()
{
    list <int> list1;//list of 0 length
    list1.push_back(5);
    list1.push_back(8);
    list1.push_back(7);
    list1.push_back(6);
    list1.push_back(6);

    // list<int> :: iterator iter;
    // iter=list1.begin();//first elem of list 1
    // cout<<*iter<<" "; //5
    // iter++;
    // cout<<*iter<<" ";

    //REMOVING ELEMENTS:
    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(6); 
    display(list1);

    //SORTING LIST:
    // list1.sort();
    // display(list1);


    list <int> list2(3);//empty list of length 3
    //list of size 3,has 3 elements,but elements have no value
    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=9;
    iter++;
    *iter=8;
    iter++;
    display(list2);

    //MERGE
    // list1.merge(list2);
    // cout<<"List 1 After merging:";
    // display(list1);

    // REVERSE
    list1.reverse();
    display(list1);

    return 0;
}