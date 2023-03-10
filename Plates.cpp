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
};
vector<lli> dp;
vector<vector<vector<lli>>> dp;
lli solve(lli x, vector<vector<lli>> &v, vector<int> index) {
    if (x == 0)
        return 0;
    lli ans = 0;
    if(mp.find({x,index})!=mp.end()){
        return mp[{x, index}];
    }
        for (int i = 0; i < v.size(); i++) {
            if (index[i] < v[i].size()) {
                lli su = v[i][index[i]];
                index[i]++;
                su += solve(x - 1, v, index);
                index[i]--;
                ans = max(ans, su);
            }
        }
        return mp[{x, index}] = ans;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int T;
    int t = 1;
    cin >> T;
    while (T--) {
        Solution ob;
        lli n, k, p;
        cin >> n >> k >> p;

        vector<vector<lli>> v(n, vector<lli>(k));
        vector<vector<vector<lli>>> tt(p + 1, vector<vector<lli>>(n + 1, vector<lli>(n, -1)));
        dp = tt;
        REP(x, n) {
                REP(y, k) {
                    cin >> v[x][y];
                }
        }
        vector<int> index(n, 0);
        cout << "Case #" << (t++) << ": " << solve(p, v, index) << endl;
    }
    return 0;
}