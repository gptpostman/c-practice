#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    // int a[5]={2,4,6,8,10};
    int *p;
    p = new int[5];
    p[0]=20;p[1]=40;p[2]=60;p[3]=80;p[4]=100;
    // p=a;
    for(int i=0;i<5;i++)
    printf("%d\t",p[i]);
    // cout<<p[i]
    // {
    //     printf("%d\t",p[i]);
    // }
    // printf("%d\t",p[i]);
    printf("\n");
    delete [] p;
    return 0;
}