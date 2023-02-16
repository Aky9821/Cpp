#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x,n) for (int x = 0; x < n; x++)

using namespace std;
class Solution {
   public:
    // Function to return the minimum cost to react at bottom
    // right cell from top left cell.
    int n, m;
    int solve(int x, int y, vector<vector<int>>& v, vector<vector<int>>& dp) {
        if (x == 1 && y == 1) {
            return v[x][y];
        }
       
        if (dp[x][y] != -1)
            return dp[x][y];
        vector<pair<int, int>> ind{{0, 1}, {1, 0},  {0, -1}};
        int ans = INT_MAX;
        for (auto it : ind) {
            int i = x + it.first;
            int j = y + it.second;
            if (i >= 0 && j >= 0 && i < n && j < m) {
                ans = min(solve(i, j, v, dp), ans);
            }
        }
        return dp[x][y] = ans + v[x][y];
    }
    int minimumCostPath(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, grid, dp);
        return 0;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.minimumCostPath(grid);
        cout << ans << "\n";
    }
    return 0;
}