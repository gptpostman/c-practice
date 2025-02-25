#include<bits/stdc++.h>
using namespace std;

void func1(int n)
{
    if(n>0)
    {
        cout<<n;
        func1(n-1);
    }
}

void func2(int n)
{
    if(n>0)
    {
        func2(n-1);
        cout<<n;
    }
}

int main()
{
    int a=5;
    func1(5);
    cout<<endl;
    func2(5);
    cout<<endl;
    return 0;
}