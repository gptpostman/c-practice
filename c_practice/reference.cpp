#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int &ref = a;
    a++;
    ref++;
    cout<<a<<endl;
    cout<<ref<<endl;
    
}