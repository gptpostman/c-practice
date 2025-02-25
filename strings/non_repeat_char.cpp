#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        unordered_map<char, int> charCount;
        
        // Count occurrences of each character
        for (char c : line) {
            charCount[c]++;
        }

        // Find the first character with count 1
        bool found = false;
        for (char c : line) {
            if (charCount[c] == 1) {
                cout << c << endl;
                found = true;
                break;
            }
        }

        // If no non-repeated character is found
        if (!found) {
            cout << "No non-repeated character found" << endl;
        }
    }
    return 0;
}