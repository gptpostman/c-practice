#include<bits/stdc++.h>
using namespace std;

int count_max_repeated(vector<int> arr)
{
    map<int,int> freq;
    for(auto x:arr)
    {
        freq[x]++;
    }

    int max_freq = 0;
    for(const auto& entry : freq)
    {
        if(entry.second > max_freq)
        {
            max_freq = entry.second;
        }
    }

    return max_freq;
}

int main()
{
    vector<int> arr = {3,2,1,3};
    int result = count_max_repeated(arr);
    cout<<result<<endl;
    return 0;
}