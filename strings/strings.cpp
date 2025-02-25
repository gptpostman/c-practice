#include<bits/stdc++.h>
using namespace std;

int main()
{
    string paragraph = "we are learning about STL strings. STL strings class is quite powerful";
    string word;
    getline(cin,word);

    /*int index = paragraph.find(word);
    if(index != -1)
    {
        cout<<"first occurence: "<<index<<endl;
    }
    index = paragraph.find(word,index+1);
    if(index != -1)
    {
        cout<<"second occurence: "<<index<<endl;
    }
    if(index == -1)
    {
        cout<<"string not found"<<endl;
    }*/

    int start = 0;
    while(true)
    {
        start = paragraph.find(word,start);
        if(start == -1)
        {
            break;
        }
        cout<<start<<",";
        start += 1;
    }
    cout<<endl;

    // cout<<paragraph.find(word)<<endl;



    // string s = "hello world";
    /*for (char c:s)
    {
        cout<<c<<",";
    }
    cout<<endl;*/

    /*vector<string> s;
    string temp;
    int n = 5;
    while(n--)
    {
        getline(cin,temp,',');
        s.push_back(temp);
    }
    for(string c : s)
    {
        cout<<c<<"-";
    }
    cout<<endl;*/
    return 0;
}