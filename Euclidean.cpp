// C++ program to demonstrate
// Basic Euclidean Algorithm
#include <bits/stdc++.h>
using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b) {
    if (a == 0)
        return b;
    cout << b << " = " << a << " * " << b/a << " + " << b % a << endl;
    return gcd(b % a, a);
}

// Driver Code
int main() {

    int a = 7398, b = 2877;
    cout << gcd(a, b)
         << endl;
    return 0;
}

// This code is contributed
// by Nimit Garg
