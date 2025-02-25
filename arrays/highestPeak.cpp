#include<bits/stdc++.h>
using namespace std;

int highestPeak(vector<int> arr)
{
    int largest = 0;
    int n = arr.size();
    for (int i=1;i<n-1;)
    {
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
        {
            int count = 1;
            int j = i;
            while(j>=1 and arr[j]>arr[j-1])
            {
                j--;
                count++;
            }
            while(i<n-1 and arr[i]>arr[i+1])
            {
                i++;
                count++;
            }
            largest = max(largest,count);

        }
        else
        {
            i++;
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout<<highestPeak(arr)<<endl;
    return 0;
}