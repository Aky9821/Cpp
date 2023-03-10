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

    int T;
    cin >> T;
    int t = 1;
    while (T--) {
        Solution ob;
        lli n, k;
        cin >> n >> k;
        vector<lli> v(n);
        REP(x, n) {
            cin >> v[x];
        }
        pq<double> q;
        for (int x = 0; x < n - 1; x++) {
            double diff = (double)v[x + 1] - v[x];
            q.push(diff);
        }
        while (!q.empty() && k > 0) {
            double d = q.top();
            if (d == 1)
                break;
            // cout << d << " " << endl;
            q.pop();
            q.push(ceil(d / 2.0));
            q.push(floor(d / 2.0));
            k--;
        }
        cout << "Case #" << (t++) << ": " << q.top() << endl;
    }
    return 0;
}