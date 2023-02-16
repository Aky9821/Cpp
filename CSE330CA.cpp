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
bool solve(int x, vector<lli>& v, lli sum1, lli sum2) {
    cout << v[x]<<" "<<sum1 << " " << sum2<<endl;
    if (x == 0) {
        if (sum1 + v[x] == sum2 || sum2 + v[x] == sum1)
            return true;
        return false;
    }
    // if (dp[x] != -1) {
    //     return dp[x];
    // }
    bool s1 = solve(x - 1, v, sum1 + v[x], sum2);
    bool s2 = solve(x - 1, v, sum1, sum2 + v[x]);
    
    return dp[x] = s1 || s2;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("Input1.txt", "r", stdin);
        freopen("Output1.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<lli> v;
    REP(x, n) {
        lli t;
        cin >> t;
        v.pb(t);
    }
    if (!(n >= 4 && n <= 20)) {
        cout << "Invalid Input" << endl;
        return 0;
    }
    vector<lli> t(n + 1, -1);
    dp = t;
    if (solve(n - 1, v, 0, 0))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}