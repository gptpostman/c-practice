#include<bits/stdc++.h>
using namespace std;

void replaceSpace(char *str)
{
    int spaces = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            spaces += 1;
        }
    }

    int index = strlen(str) + 2*spaces;
    str[index] = '\0';

    for(int i = strlen(str)-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[index-1] = '0';
            str[index-2] = '2';
            str[index-3] = '%';
            index = index - 3;
        }
        else
        {
            str[index-1] = str[i];
            index--;
        }
    }
}

int main()
{
    char input[1000];
    cin.getline(input,1000);
    replaceSpace(input);
    cout<<input<<endl;
    return 0;
}