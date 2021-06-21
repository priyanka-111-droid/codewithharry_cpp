#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

class product{
    char name[30];
    char cost[10];
    public:
    friend istream& operator>>(istream&in,product &c);
    friend ostream& operator<<(ostream&out,const product &c);
    bool operator>(product& obj2);
};

bool operator>(product& obj2){
    cout<<(this->cost>obj2.cost);
}
void swap(product *xp, product *yp)
{
    product temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(product arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
        {}
        else
            swap(&arr[j], &arr[j+1]);
}
istream & operator >> (istream &in, product &c)
{

    in >> c.name;
    in >> c.cost;
    return in;
}
ostream & operator << (ostream &out, const product &c)
{
    out << c.name<<endl;
    out << c.cost<<endl;
    return out;
}
 
int main(){
    product c[20];
    int i,num;
    cin>>num;
    for(i=0;i<num;i++){
        cin>>c[i];
    }
    sort(c,num);
    for(i=0;i<num;i++){
        cout<<c[i];
    }
}