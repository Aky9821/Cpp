#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 998244353
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

class Solution {
   public:
};
lli binaryToDecimal(string s) {
    lli dec_value = 0;
    lli base = 1;
    int l = s.length();
    int x = l - 1;
    while (x >= 0) {
        int bit = 0;
        if (s[x] == '1') {
            bit = 1;
        }
        x--;
        dec_value += bit * base;

        base = base * 2;
    }

    return dec_value;
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
        string s;
        cin >> n >> s;
        vector<string> v;
        for (int x = 0; x < n; x++) {
            for (int y = x + 1; y <= n; y++) {
                v.pb(s.substr(x, y - x));
                // cout << s.substr(x, y - x) << endl;
            }
        }
        int l = v.size();
        lli ans = 0;
        REP(x, l) {
            ans = ((ans % mod) ^ (binaryToDecimal(v[x]) % mod)) % mod;
            //cout << v[x]<<"\t"<<binaryToDecimal(v[x]) << endl;
        }
        cout << ans << endl;
    }
    return 0;
}