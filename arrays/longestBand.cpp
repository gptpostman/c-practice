#include<bits/stdc++.h>
using namespace std;

int longestBand(vector<int> arr)
{
    int n = arr.size();
    unordered_set<int> s;

    for(int x : arr)
    {
        s.insert(x);
    }

    int longestLen = 1;

    for(auto element : s)
    {
        int parent = element - 1;
        
        if(s.find(parent)==s.end())
        {
            int next_num = element + 1;
            int count = 1;

            while(s.find(next_num)!=s.end())
            {
                next_num++;
                count++;
            }
            if(count > longestLen)
            {
                longestLen = count;
            }
        }
    }
    return longestLen;
}

int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<longestBand(arr)<<endl;
    return 0;
}
