#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr = {1,2,3,4,5};
	
	// arr.push_back(6);
	// arr.pop_back();
	// for (int i=0;i<arr.size();i++)
	for(int i : arr)
	{
		cout<<i<<endl;
	}
	//cout<<arr.size()<<endl;
	//cout<<arr.capacity()<<endl;
	
	return 0;
}
