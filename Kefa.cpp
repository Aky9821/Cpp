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
bool mycp(pair<lli, lli> p1, pair<lli, lli> p2) {
    return p1.first < p2.first;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    lli n, d;
    cin >> n >> d;
    vector<pair<lli, lli>> v;
    vector<lli> pref(n, 0);
    REP(x, n) {
        lli m, f;
        cin >> m >> f;
        v.pb({m, f});
    }
    sort(v.begin(), v.end(), mycp);
    for (int x = 0; x < n; x++) {
        if (x != 0) {
            pref[x] = v[x].second + pref[x - 1];
        } else
            pref[x] = v[x].second;
        //cout << v[x].first << endl;
    }
    lli ans = 0;
    for (int x = 0; x < n; x++) {
        lli limit = v[x].first + d;
        lli l = x, r = n - 1;

        while (l <= r) {
            lli mid = l + (r - l) / 2;
            //cout << limit << " "<<ans<<endl;
            if (v[mid].first >= limit) {
                r = mid - 1;
            } else {
                if (x == 0) {
                    ans = max(ans, pref[mid]);
                } else {
                    ans = max(ans, pref[mid] - pref[x - 1]);
                }
                l = mid + 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}