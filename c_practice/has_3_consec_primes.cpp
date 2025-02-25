#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if there are 3 consecutive prime numbers in the array
bool hasThreeConsecutivePrimes(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i <= n - 3; i++) {
        if (isPrime(arr[i]) && isPrime(arr[i + 1]) && isPrime(arr[i + 2])) {
            cout<<"Three consecutive primes found!"<<endl<<arr[i]<<","<<arr[i+1]<<","<<arr[i+2]<<endl;
            return true;
        }
    }
    return false;
}

int main() 
{
    vector<int> arr = {0,200,400,11,14,13,17,22,64,31,37,43,99};
    if (!hasThreeConsecutivePrimes(arr)) 
    {
        cout << "No three consecutive primes." << endl;
    }

    return 0;
}
