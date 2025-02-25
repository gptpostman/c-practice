#include<iostream>
#include<thread>
#include<bits/stdc++.h>
using namespace std;

//1. funcion pointer
//this is very basic form of thread creation

/*void func(int x)
{
    while(x-- > 0)
    {
        cout<<x<<endl;
    }
}

int main()
{
    std::thread t(func,10);
    t.join();
    return 0;
}*/

//2. lambda function

/*int main()
{
    auto func = [](int x)
    {
        while(x-- > 0)
        {
            cout<<x<<endl;
        }
    };

    std::thread t(func,10);
    t.join();
    return 0;
}*/

//variation of lambda
/*int main()
{
    // auto func = ;

    std::thread t([](int x)
    {
        while(x-- > 0)
        {
            cout<<x<<endl;
        }
    },10);
    t.join();
    return 0;
}*/

//3. functor (function object)
/*class Base
{
    public:
        void operator()(int x)
        {
            //while(x-- > 0)
            //{
            //    cout<<x<<endl;
            //}
           cout<<"function object thread, value: "<<x<<endl;
        }
};
int main()
{
    int p = 42;
    Base functor;
    std:thread t(functor,p);
    t.join();
    return 0;
}
*/

//4. non static member function

/*class Base
{
    public:
    void run(int x)
    {
        while(x-- > 0)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Base b;
    std::thread t(&Base::run,&b,10);
    t.join();
    return 0;
}*/

//5. static member function

class Base
{
    public:
    static void run(int x)
    {
        while(x-- > 0)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Base b;
    std::thread t(&Base::run,10);
    t.join();
    return 0;
}