#include<bits/stdc++.h>
using namespace std;

/*void miniMaxSum(vector<int> arr) 
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int cur_sum_min = 0;
    long cur_sum_max = 0;
    int min_sum=0;
    long max_sum=0;

    for (int i=0;i<n-1;i++)
    {
        cur_sum_min = cur_sum_min + arr[i];
    }
    min_sum = max(min_sum,cur_sum_min);

    for (int i=1;i<n;i++)
    {
        cur_sum_max = cur_sum_max + arr[i];
    }
    max_sum = max(max_sum,cur_sum_max);
    
    cout<<min_sum<<" "<<max_sum<<endl;
}*/

/*void minMaxSum2(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    long total_sum =0;
    for(int i=0;i<n;i++)
    {
        total_sum = total_sum+arr[i];
    }
    long min_sum = total_sum - arr[n-1];
    long max_sum = total_sum - arr[0];
    cout<<min_sum<<" "<<max_sum<<endl;
}*/

void minMaxSum3(vector<int> arr)
{
    long total_sum = 0;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for(int i=0;i<arr.size();i++)
    {
        total_sum += arr[i];
        min_val = min(min_val,arr[i]);
        max_val = max(max_val,arr[i]);
    }

    long min_sum = total_sum - max_val;
    long max_sum = total_sum - min_val;

    cout<<min_sum<<' '<<max_sum<<endl;
    return;
}

int main()
{
    vector<int> v{256741038,623958417,467905213,714532089,938071625};
    minMaxSum3(v);
    return 0;
}