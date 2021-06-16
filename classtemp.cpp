#include<iostream>
using namespace std;

template<class T>

class AddElements{
    public:
    T element;
    AddElements(T a){
        element=a;
    }
    T add(T x){
        return element +x;
    }
};

template<>
class AddElements <string>{
    public:
    string element1;
    AddElements(string a){
        element1=a;
    }
    string concatenate(string x){
        return element1+x;
    }  
};

/*Write the class AddElements here*/

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
