//virtual functions example
/*Rules:
1.cannot be static
2.accessed by object pointers
3.virtual functions can be friend of another class
4.A virtual function in base class might not be used.
5.If a virtual function defined in base class,there is no necessity of redefining it in derived class.
that is,if there is no display() in derived class,it will print base class ka display().
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
        virtual void display(){
            cout<<"base class here.."<<endl;
        }

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
    // void display(){
    //     cout<<"This is an amazing text tutorial with title"<<title<<endl;
    //     cout<<"Rating:"<<rating<<"out of 5 stars"<<endl;
    //     cout<<"No of words:"<<words<<endl;
    // }


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
    
    //derived class 1 ka  object
    CWHvideo djvideo(title,rating,vlen);
    //method ko directly run kiya hai
    // djvideo.display();

    //method ko pointer se run kiya hai
    CWH *basepointer;
    basepointer=&djvideo;
    basepointer->display();

    //////////////////////////////
    //for derived class 2(cwh text)

    title="Django tutorial text";
    words=433;
    rating=4.77;

    //derived class 2 ka object
    CWHtext djtext(title,rating,words);

    //method ko directly run kiya hai
    // djtext.display();

    
    //method ko pointer se run karna
    basepointer =&djtext;
    basepointer->display();

    /////////////////////////////////
    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();

    //////
    //now if I remove virtual, base class display() is printed 4 times


    return 0;
}