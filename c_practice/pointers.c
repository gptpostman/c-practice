#include<stdio.h>
#include<stdlib.h>
void main()
{
    // int a = 10;
    // int *p;
    // p = &a;
    // printf("%d\n",*p);
    // printf("address of a in pointer p %d\n",p);
    // printf("address of a %d\n",&a);
    // printf("address of pointer p %d\n",&p);

    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0]=20;p[1]=40;p[2]=60;p[3]=80;p[4]=100;
    for(int i=0;i<5;i++)
    printf("%d\t",p[i]);
    // {
    //     printf("%d\t",p[i]);
    // }
    // printf("%d\t",p[i]);
    printf("\n");
    free(p);
    // return 0;
}