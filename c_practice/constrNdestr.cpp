#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(){length=breadth=1;};         //default constructor
    rectangle(int l, int b);                //parameterised constructor

    int area();                     
    int perimeter();
    
    int getLB(){return length,breadth;}         //getter or accessor   
    void setLB(int l,int b){length = l;breadth = b;}        //setter or mutator

    ~rectangle();                   //destructor

};

rectangle::rectangle(int l, int b)      //parameterised constructor
{
    length = l;
    breadth = b;
}

int rectangle::area()
{
    return length*breadth;
}

int rectangle::perimeter()
{
    return 2*(length+breadth);
}

rectangle:: ~rectangle(){}      //destrucor


int main()
{
    rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setLB(20,10);
    // cout<<r.getLB()<<endl;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;

    return 0;
}