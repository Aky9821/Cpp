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
bool solve(lli x, lli k, vector<lli>& v) {
    lli c = 0;
    for (int y = 1; y < v.size(); y++) {
        lli diff = v[y] - v[y - 1];

        c += ceil((double)diff / x) - 1;
    }
    if (c <= k)
        return true;
    return false;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    int t = 1;
    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        lli n, k;
        cin >> n >> k;
        vector<lli> v(n);
        REP(x, n) {
            cin >> v[x];
        }
        lli mx = 0;
        for (int x = 0; x < n - 1; x++) {
            lli diff = v[x + 1] - v[x];
            mx = max(mx, diff);
        }
        lli l = 1, r = mx;

        lli ans = INT_MAX;
        while (l <= r) {
            lli mid = l + (r - l) / 2;
            //  cout << mid << " " << solve(mid, k, v) << endl;
            if (solve(mid, k, v)) {
                r = mid - 1;
                ans = min(ans, mid);
            } else {
                l = mid + 1;
            }
        }
        cout << "Case #" << (t++) << ": " << ans << endl;
    }
    return 0;
}