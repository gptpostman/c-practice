#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int> arr)
{
    int n = arr.size();
    int current_sum = 0;
    // float inf = numeric_limits<float>::infinity();
    // float best_sum = inf*-1;
    int best_sum = 0;
    for(auto i=0;i<n;i++)
    // for(auto i:arr)
    {
        current_sum += arr[i];
        best_sum = max(best_sum,current_sum);
        if(current_sum < 0)
        {
            current_sum = 0;
        }
    }
    return best_sum;
}

int main()
{
    // vector<int> arr{-1,2,3,4,-2,6,-8,3};
    vector<int> arr{2,3,-2,-1,10};
    cout<<maxSum(arr)<<endl;
    return 0;
}