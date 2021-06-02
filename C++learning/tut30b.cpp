#include<iostream>
#include<math.h>
using namespace std;
class Point{
    int x,y;
    friend void distance(Point p1,Point p2);
    public:
        Point(int a,int b){
            x=a;
            y=b;
        }
        void displayPoint(){
            cout<<"Point is("<<x<<","<<y<<")"<<endl;
        }
};
void distance(Point p1,Point p2){
            double res;
            res=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
            cout<< res;
}
int main()
{
    Point p(0,1);
    p.displayPoint();
    Point q(0,6);
    q.displayPoint();
    distance(p,q);
    return 0;
}