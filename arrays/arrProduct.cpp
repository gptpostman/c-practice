#include<bits/stdc++.h>
using namespace std;

vector<int> arrProdcut(vector<int> arr)
{
    int n = arr.size();
    if(n == 1)
    {
        return {0};
    }

     vector<int> product(n,1);
     int i = 1;
     int temp = 1;
    
     for (i=0;i<n;i++)
     {
        product[i] = temp;
        temp *= arr[i]; 
     }

     temp = 1;
     for(i=n-1;i>=0;i--)
     {
        product[i] *= temp;
        temp *= arr[i];
     }

     return product;
}

int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> result = arrProdcut(a);
    for (int32_t i : result)
    // for(int i=0;i<result.size();i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}