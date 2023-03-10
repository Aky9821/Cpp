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
bool mycp(pair<int, int> p1, pair<int, int> p2) {
    return p1.first > p2.first;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    lli n, q;
    cin >> n >> q;
    vector<lli> v(n);
    REP(x, n) {
        cin >> v[x];
    }
    lli ans = 0;
    sort(v.begin(), v.end(), greater<int>());
    vector<lli> f(n + 1);
    vector<pair<int, int>> que(q);
    REP(x, q) {
        int l, r;
        cin >> l >> r;
        f[l - 1] += 1;
        f[r] -= 1;
        que[x] = {l - 1, r - 1};
    }
    for (int x = 1; x < n; x++) {
        f[x] += (lli)f[x - 1];
    }
    vector<pair<int, int>> t(n);
    for (int x = 0; x < n; x++) {
        t[x] = {f[x], x};
    }

    sort(t.begin(), t.end(), mycp);
    int x = 0;
    vector<lli> nw(n);
    for (auto it : t) {
        nw[it.second] = v[x++];
    }

    for (int x = 1; x < n; x++) {
        nw[x] += (lli)nw[x - 1];
    }
    for (auto it : que) {
        //  cout << it.first << " " << it.second << endl;
        if (it.first == 0)
            ans += (lli)nw[it.second];
        else
            ans += (lli)nw[it.second] - nw[it.first - 1];
    }
    cout << ans << "\n";
    return 0;
}