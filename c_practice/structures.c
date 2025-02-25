#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// struct card{
//     int face_value;
//     char shape[8];
//     char color[6];
// };

// int main()
// {
//     struct card c = {13,"heart","red"};

//     // c.face_value = 13;
//     // strcpy(c.shape,"heart");
//     // strcpy(c.color,"red");

//     printf("%d\n",c.face_value);
//     printf("%s\n",c.shape);
//     printf("%s\n",c.color);

//     return 0;
// }

struct rectangle{
    int length;
    int breadth;
} r1,r2;

int main()
{
    struct rectangle r3;
    r3.length = 5;
    r3.breadth = 2;

    r1. length = 5;
    r1.breadth = 6;

    r2.length = 4;
    r2.breadth = 5;

    printf(" area of r1 is %d\n",r1.length*r1.breadth);
    printf(" area of r2 is %d\n",r2.length*r2.breadth);
    printf(" area of r3 is %d\n",r3.length*r3.breadth);

    return 0;
}