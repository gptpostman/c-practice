#include<bits/stdc++.h>
using namespace std;

/*vector<int> stringSearch(string s,string ch)
{
    vector<int> result = {};
    int index = 0;
    index = s.find(ch);
    while(index != -1)
    {
        result.push_back(index);
        index = s.find(ch,index+1);
    }
    return result;
}*/

vector<int> stringSearch(string s,string ch)
{
    vector<int> result = {};
    int start = 0;
    while(true)
    {
        start = s.find(ch,start);
        if(start == -1)
        {
            break;
        }
        result.push_back(start);
        start += 1;
    }
    return result;
}

int main()
{
    string a = "I liked the movie, acting in movie was great!";
    string b = "movie";
    vector<int> res = stringSearch(a,b);
    for(auto i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}