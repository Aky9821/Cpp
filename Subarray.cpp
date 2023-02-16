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
int solve(){
    lli n, s;
    cin >> n >> s;
    vector<lli> v(n);
    REP(x, n) {
        cin >> v[x];
    }
    int l = 0, r = 0;
    lli sum = 0;
    while (r < n) {
        sum += v[r];
        if (sum == s) {
            cout << l+1 << " " << r+1 << endl;
            return 0;
        }
        while (sum > s) {
            sum -= v[l++];
        }
        if (sum == s) {
            cout << l + 1 << " " << r + 1 << endl;
            return 0;
        }
        r++;
    }
    cout << -1 << endl;
    return 0;
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
        solve();
    }
}