#include<bits/stdc++.h>
using namespace std;

pair<int,int> absDiff(vector<int> arr1, vector<int> arr2)
{
    int minDiff = INT_MAX;
    pair<int,int> minimumPair;
    int m = arr1.size();
    int n = arr2.size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int diff = abs(arr1[i] - arr2[j]);
            if(diff < minDiff)
            {
                minDiff = diff;
                minimumPair = {arr1[i],arr2[j]};
            }
        }
    }
    return minimumPair;
}

int main()
{
    vector<int> a1{23,5,10,17,30};
    vector<int> a2{26,134,135,14,19};

    pair<int, int> result = absDiff(a1, a2);
    cout<<"("<<result.first<<","<<result.second<<")"<<endl;
    return 0;
}