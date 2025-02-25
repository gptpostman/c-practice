#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull oddSum = 0;
ull evenSum = 0;

void calc_odd_sum(ull start,ull end)
{
    for(ull i=start;i<=end;++i)
    {
        if((i & 1)==1)
        {
            oddSum += i;
        }
    }
}

void calc_even_sum(ull start,ull end)
{
    for(ull i=start;i<=end;++i)
    {
        if((i & 1) == 0)
        {
            evenSum += i;
        }
    }
}

int main()
{
    ull start = 0, end = 1900000000;

    auto startTime = high_resolution_clock::now();

    //std::thread t1(calc_even_sum,start,end);
    //std::thread t2(calc_odd_sum,start,end);
    
    //t1.join();
    //t2.join();

    calc_even_sum(start,end);
    calc_odd_sum(start,end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout<<"oddsum: "<<oddSum<<endl;
    cout<<"evensum: "<<evenSum<<endl;

    cout<<"secs: "<<duration.count()/1000000<<endl;

    return 0;
}