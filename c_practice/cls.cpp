#include<bits/stdc++.h>
using namespace std;

class arithematic
{
    private: 
        int a,q;           //these are data members of class

    public:
    arithematic(){}     //default constructor
    arithematic(int a, int b)       //parameterised constructor     
    {
        a=a;
        q=b;
    }

    int add(int a, int q)
    {
        int c = a+q;
        return c;
    }

    int sub(int a, int q)
    {
        int c = a-q;
        return c;
    }

};

int main()
{
    int x = 10;
    int y = 5;
    arithematic a1(x,y);
    cout<<a1.add(x,y)<<endl;
    cout<<a1.sub(x,y)<<endl;

    return 0;
}