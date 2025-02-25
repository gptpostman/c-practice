#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    for(int row=1;row<=n;row++)
    {
        for(int space = 1; space <= n - row; space++) 
        {
            cout << " ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(int col=1;col<row;col++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    // Lower part (inverted pattern)
    for (int row = n - 1; row >= 1; row--) {
        // Print leading spaces
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        // Print stars for the left half
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        // Print stars for the right half (mirroring)
        for (int col = 1; col < row; col++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}