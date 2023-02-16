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
    while (T--) {
        Solution ob;
        lli n;
        cin >> n;
        vector<lli> v(n);
        REP(x, n)
        cin >> v[x];
        vector<lli> pref(n,0);
        int c = 0;
        for (int x = 0; x < n; x++) {
            if(v[x]==2)
                c++;
            pref[x] = c;
        }
        vector<lli> suff(n,0);
        c = 0;
        for (int x = n - 1; x >= 0; x--) {
           if(v[x]==2)
                c++;
           suff[x] = c;
        }
        // for(auto it:pref){
        //    cout << it << " ";
        // }
        // cout << endl;
        // for(auto it:suff){
        //    cout << it << " ";
        // }
        // cout << endl;
        lli ans = -1;
        for (int x = 0; x < n - 1; x++) {
            if (pref[x] == suff[x + 1]) {
                ans = (x + 1);
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}