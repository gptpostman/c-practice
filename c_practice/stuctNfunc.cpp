#include<bits/stdc++.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void initialize(struct rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct rectangle r)
{
    return r.length*r.breadth;
}

void changeLength(struct rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct rectangle rect;
    initialize(&rect, 10,5);
    cout<<area(rect)<<endl;
    changeLength(&rect,20);
    cout<<area(rect)<<endl;

    return 0;
}