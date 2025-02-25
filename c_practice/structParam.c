#include<stdio.h>
#include<stdlib.h>
// using namespace std;

struct rectangle{
    int length;
    int breadth;
}r1;

int area(struct rectangle r)    //call by value
{
    printf("\n----------passing struct as param as pass by value-------------\n");
    int area = r.length * r.breadth;
    return area;
    return r.length * r.breadth;
}

/*int area(struct rectangle &r)     //call by reference ---only possible with c++
{
    r.length++;
    return r.breadth*r.length;
}*/

void changeLength(struct rectangle *p, int l)         //call by address
{
    printf("\n----------passing struct as param as pass by address using pointers-------------\n");
    p->length = l;
}

int main()
{
    struct rectangle r1 = {10,5};
    printf("\narea_before:%d\n",area(r1));
    changeLength(&r1,20);
    printf("\nchanged length:%d\n",r1.length);
    printf("\narea_after:%d\n\n",area(r1));
    return 0;
}

