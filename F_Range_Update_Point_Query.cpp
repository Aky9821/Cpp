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
lli sm(lli n) {
    lli sum = 0;
    for (lli x = n; x > 0; x /= 10) {
        sum += x % 10;
    }
    return sum;
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
        lli n, q;
        cin >> n >> q;
        vector<lli> v(n);
        REP(x, n) {
            cin >> v[x];
        }
        vector<lli> pref(n + 1, 0);
        bool flag = false;
        REP(x, q) {
            int t;
            cin >> t;
            
            if (t == 1) {
                lli l, r;
                cin >> l >> r;
                pref[l - 1]++;
                pref[r]--;
                flag = true;
            } else {
                int out;
                cin >> out;
                lli d = v[out - 1];
                if(flag){
                    for (int x = 1; x <= n; x++) {
                        pref[x] += pref[x - 1];
                    }
                    flag = false;
                }
                // for(auto it:pref){
                //     cout << it << " ";
                // }
                // cout << endl;

                for (int z = 0; z < pref[out - 1]; z++) {
                    lli sum = sm(d);
                    d = sum;
                }
                cout << d << endl;
            }
        }
    }
    return 0;
}