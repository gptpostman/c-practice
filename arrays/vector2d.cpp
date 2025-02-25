#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };*/
    int rows = 4, cols = 3, fill_value = 5;
    vector<vector<int>> arr(rows, vector<int>(cols, fill_value));

    for (int i=0;i<arr.size();i++)
    {
        // for(int j=0;j<arr[i].size();j++)
        // {
        //     cout<<arr[i][j]<<endl;
        // }
        for(int j : arr[i])
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}