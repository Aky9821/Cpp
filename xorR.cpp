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

pair<lli, bool> solve(lli x, vector<lli>& v, vector<pair<lli, bool>>&dp) {
    if (x == v.size()) {
        return { v[x], true};
    }
    if (x > v.size()) {
        return {-1, false};
    };
    if(dp[x].first!=-2){
        return dp[x];
    }
    
    lli ans = INT_MAX;
    for (int i = x + 1; i <= x + v[x]; i++) {
        pair<lli,bool>sv=solve(i, v,dp);
        if (sv.second == true){
            ans = min(ans, (v[x]|sv.first));
        }
    }
    if(ans==INT_MAX)
        return dp[x] = {-1, false};
    else
        return dp[x]={ans, true};
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    
    int T;
    cin >> T;
    while (T--) {
        Solution ob;

        int n;
        cin >> n;
        vector<lli> v;
        lli sz = 0;
        REP(x, n) {
            lli t;
            cin >> t;
            v.pb(t);
            sz = sz | t;
        }
        vector<pair<lli, bool>> dp(n + 1, {-2, false});

        cout<<solve(0,  v,dp).first<<endl;
    }
    return 0;
}