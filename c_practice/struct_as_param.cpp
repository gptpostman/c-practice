#include<bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
}r1;

int area(struct rectangle r)    //call by value
{
    // int area = r.length * r.breadth;
    // return area;
    return r.length * r.breadth;
}

/*int area(struct rectangle &r)     //call by reference
{
    r.length++;
    return r.breadth*r.length;
}*/

void changeLength(struct rectangle *p, int l)         //call by address
{
    p->length = l;
}

int main()
{
    r1 ={10,5};
    // cout<<"area: "<<area(r1)<<endl;
    changeLength(&r1,20);
    cout<<"changed length: "<<r1.length<<endl;
    cout<<"area: "<<area(r1)<<endl;
    return 0;
}

