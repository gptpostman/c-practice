#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr,int targetSum)
{
    //unordered_set<int> set;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    for(int i=0;i<n-3;i++)
    {
        int j = i+1;
        int k = n-1;
        //int x = sum-arr[i];
        //two pointer approach
        while(j<k)
        {
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];
            if(current_sum == targetSum)
            {
                res.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            } 
            else if(current_sum>targetSum)
            {
                k--;
            }
            else{
                j++;
            }
        }
        //if(set.find(x)!=set.end())
        /*{
            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }
        set.insert(arr[i]);
    }*/
    }
    return res;
}

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int s = 30;
    auto result = tripletSum(arr,s);
    for(auto v : result)
    {
        for(auto p:v)
        {
            cout<<p<<",";
        }
        cout<<endl;
    }
    return 0;
}