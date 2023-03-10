//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   public:
    vector<vector<int>> dp;
    int solve(int x, int prev, int v[], int n) {
        if (x == n)
            return 0;
        if (dp[x][prev + 1] != -1)
            return dp[x][prev + 1];
        int take = 0, notTake = 0;
        if (v[x] > prev)
            take = v[x] + solve(x + 1, v[x], v, n);
        notTake = solve(x + 1, prev, v, n);
        return dp[x][prev + 1] = max(take, notTake);
    }
    int maxSumIS(int v[], int n) {
        int mx = 0;
        for (int x = 0; x < n; x++)
            mx = max(mx, v[x]);
        
        vector<vector<int>> t(n, vector<int>(1e6, -1));
        dp = t;
        return solve(0, -1, v, n);
        return 0;
        // Your code goes here
    }
};

//{ Driver Code Starts.
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
       cout << ob.maxSumIS(a, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends