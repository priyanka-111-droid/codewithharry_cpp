/*
abstract base class and pure virtual functions
1.abstract base class:class made to be derived 
2.pure virtual functions:is used to make abstract base class
3.so in base class,add virtual function so that uske derived class mein naya function BANANA HI pade,
ab class abstract base class ho gaya hai.
4.this type of virtual function is called pure virtual function
5.So we can say abstract base class aisi base class hain jisme atleast ek 
pure virtual function present hain.

*/

#include<iostream>
#include<cstring> //for strcpy
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating=r;
        }
        virtual void display()=0;//do nothing function-->pure virtual function
        

};
class CWHvideo:public CWH{
    float videolength;
    public:
    CWHvideo(string s,float r,int vl):CWH(s,r){//video 47-derived class ka constructor
        videolength=vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Rating: "<<rating<<"out of 5 stars"<<endl;
        cout<<"video length: "<<videolength<<endl;
    }

};
class CWHtext:public CWH{
    int words;
    public:
    CWHtext(string s,float r,int wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title"<<title<<endl;
        cout<<"Rating:"<<rating<<"out of 5 stars"<<endl;
        cout<<"No of words:"<<words<<endl;
    }


};

int main()
{
    string title=new char[30];//30 char string
    float rating,vlen;
    int words;


    //for derived class 1(cwh video)
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHvideo djvideo(title,rating,vlen);
    //for derived class 2(cwh text)

    title="Django tutorial text";
    words=433;
    rating=4.77;
    CWHtext djtext(title,rating,words);


    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}