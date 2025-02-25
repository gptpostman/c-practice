#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    // hollow rhombus pattern

    int n=3;
    for(int row=n;row>=1;row--)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        // Print spaces
        for (int col = 0; col < (n - row) * 2; col++) {
            cout << " ";
        }
        for (int col = 0; col < row; col++) {
            cout << "*";
        }
        /*for (int space = 2; space <= n - row; space++) 
        {
            cout << " ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}*/


/*int main() {
    int n = 7; // Size of the pattern (number of rows)

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if(row==0||row==n-1||col==0||col==n-1||(row==col&&row!=2)||(row+col==n-1 && row!=2))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << "\n";
    }

    return 0;
}*/
/*int main()
{
    int n;
    cout << "Enter an odd value for n: ";
    cin >> n;

    // Check if n is odd, if not, exit the program
    if (n % 2 == 0) {
        cout << "Please enter an odd value for n." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print stars on the outer boundaries, or on the diagonals, except for the center spaces
            //if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1) {
            if (i == 0 || i == n - 1 || 
                (i < n / 2 && (j < (n / 2 - i) || j >= (n / 2 + i))) || 
                (i > n / 2 && (j < (i - n / 2) || j >= (n - (i - n / 2))))) {  
                cout << "*";
            } else {
                cout << " "; // Print spaces inside the middle of the pattern
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}*/

/*int main() {
    int n;
    cout << "Enter an odd value for n: ";
    cin >> n;

    // Check if n is odd
    if (n % 2 == 0) {
        cout << "Please enter an odd value for n." << endl;
        return 1;
    }

    // Upper part of the pattern
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            // Print stars on the left and right boundaries
            if (j < n / 2 - i || j >= n / 2 + i) {
                cout << "*";
            } else {
                cout << " "; // Print spaces in between
            }
        }
        cout << endl; // Move to the next line after each row
    }

    // Middle row with only spaces in the center
    for (int j = 0; j < n; j++) {
        if (j == n / 2) {
            cout << " "; // Print a space in the middle
        } else {
            cout << "*"; // Print stars in the rest of the row
        }
    }
    cout << endl;

    // Lower part of the pattern (mirror of upper part)
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            // Print stars on the left and right boundaries
            if (j < i + 1 || j >= n - (i + 1)) {
                cout << "*";
            } else {
                cout << " "; // Print spaces in between
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}*/

/*int main()
{
    int n;
    cout<<"no.of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(2*i-2);j++)
        {
            cout<<" ";
        }
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=(2*i-2);j<(2*n-2);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/

int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for (int space = 1; space <= n-i; space++) 
        {
            cout << " ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
}