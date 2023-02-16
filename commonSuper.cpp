#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

class Solution {
   public:
    vector<vector<string>> dp;
    string solve(int x, int y, string &s, string &t) {
        if (dp[x][y] != "#")
            return dp[x][y];
        if (x == s.size()) {
            string tt = "";
            for (int i = t.size() - 1; i >= y; i--) {
                tt += t[i];
            }
            return tt;
        }
        if (y == t.size()) {
            string tt = "";
            for (int i = s.size() - 1; i >= x; i--) {
                tt += s[i];
            }
            return tt;
        }
        if (dp[x][y] != "#")
            return dp[x][y];
        if (s[x] == t[y]) {
            return dp[x][y] = solve(x + 1, y + 1, s, t) + s[x];
        } else {
            string l = solve(x + 1, y, s, t) + s[x];
            string r = solve(x, y + 1, s, t) + t[y];
            return dp[x][y] = l.size() < r.size() ? l : r;
        }
    }
    string shortestCommonSupersequence(string s, string t) {
        vector<vector<string>> tt(s.size() + 1, vector<string>(t.size() + 1, "#"));
        dp = tt;

        string ans = solve(0, 0, s, t);
        cout << ans;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    Solution ob;
    string s, t;
    cin>>s>>t;
    cout << ob.shortestCommonSupersequence(s, t);
    return 0;
}