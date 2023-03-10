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

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    lli n;
    cin >> n;
    vector<lli> v(n);

    priority_queue<lli, vector<lli>, greater<lli>> pq;
    REP(x, n) {
        cin >> v[x];
        pq.push(v[x]);
    }
    lli ans = 0;
    while (pq.size() >= 2) {
        lli l = pq.top();
        pq.pop();
        lli r = pq.top();
        pq.pop();
        ans += l + r;
        pq.push(l + r);
    }
    cout << ans << endl;

    return 0;
}