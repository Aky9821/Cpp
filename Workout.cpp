// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Maximum number of vertices
#define N 705

// To store is it possible at
// particular pace or not
int dp[N][N][2];

// Return 1 if from l to r, it is possible with
// the given state
int possibleWithState(int l, int r, int state, int a[]) {
    // Base condition
    if (l > r)
        return 1;

    // If it is already calculated
    if (dp[l][r][state] != -1)
        return dp[l][r][state];

    // Choose the root
    int root;
    if (state == 1)
        root = a[r + 1];
    else
        root = a[l - 1];

    // Traverse in range l to r
    for (int i = l; i <= r; i++) {
        // If gcd is greater than one
        // check for both sides
        if (__gcd(a[i], root) > 1) {
            int x = possibleWithState(l, i - 1, 1, a);
            if (x != 1)
                continue;
            int y = possibleWithState(i + 1, r, 0, a);
            if (x == 1 && y == 1)
                return dp[l][r][state] = 1;
        }
    }

    // If not possible
    return dp[l][r][state] = 0;
}

// Function that return true if it is possible
// to make Binary Search Tree
bool isPossible(int a[], int n) {
    memset(dp, -1, sizeof dp);

    // Sort the given array
    sort(a, a + n);

    // Check it is possible rooted at i
    for (int i = 0; i < n; i++)

        // Check at both sides
        if (possibleWithState(0, i - 1, 1, a) && possibleWithState(i + 1, n - 1, 0, a)) {
            return true;
        }

    return false;
}

// Driver code
int main() {
    int a[] = {3, 6, 9, 18, 36, 108};
    int n = sizeof(a) / sizeof(a[0]);

    if (isPossible(a, n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
