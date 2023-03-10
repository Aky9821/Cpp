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
lli c, h;

lli DFS(lli x, vector<vector<lli>> &v, lli prev) {
    c = max(c, (lli)v[x].size());
    lli mx = 0;
    for (auto it : v[x]) {
        if (it != prev)
            mx = max(mx, DFS(it, v, x));
    }
    return mx + 1;
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
        lli n;
        cin >> n;

        vector<vector<lli>> v(n + 10);
        v[0].pb(1);
        for (int x = 0; x < n - 1; x++) {
            lli t;
            cin >> t;
            v[t].pb(x + 2);
        }
        c = 0;
        h = 0;
        h = DFS(0, v, -1) - 1;
        if(h)
    }
    return 0;
}