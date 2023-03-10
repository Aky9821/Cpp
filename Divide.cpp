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
lli ans;
lli total = 0;
void solve(lli x, lli w1 ,vector<lli>& v) {
    if (x == v.size()) {
        ans = min(abs(total-w1 - w1), ans);
        return;
    }
    solve(x + 1, w1 + v[x],  v);
    solve(x + 1, w1, v);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    lli n;
    ans = INT_MAX;
    cin >> n;

    vector<lli> v;
    REP(x, n) {
        lli t;
        cin >> t;
        v.pb(t);
        total += t;
    }
    solve(0, 0, v);
    cout<<ans<<endl;
}