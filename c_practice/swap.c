#include<stdio.h>
//Pass by reference in C - possible only using pointers
/*void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
    printf("Inside swap (pass by reference): x = %d, y = %d\n", *a, *b);
}

int main()
{
    int x=5,y=10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x,&y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}*/

//Pass by value in C
void swap(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
    printf("Inside swap (pass by value): x = %d, y = %d\n", a, b);
}

int main()
{
    int x=5,y=10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x,y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}