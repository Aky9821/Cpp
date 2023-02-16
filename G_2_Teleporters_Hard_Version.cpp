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
lli n, c;
vector<lli> v;

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        Solution ob;

        cin >> n >> c;
        v.resize(n);
        REP(x, n) {
            cin >> v[x];
        }
        vector<pair<lli, char>> vn(n);
        for (int x = 0; x < n; x++) {
            if (v[x] + x + 1 <= v[x] + n - x) {
                vn[x] = {v[x] + x + 1, 'L'};
            } else {
                vn[x] = {v[x] + n - x, 'R'};
            }
        }
        sort(vn.begin(), vn.end());

        bool flag = false;
        lli ans = 0;
        int index = -1;
        for (int x = 0; x < n; x++) {
            if (vn[x].second == 'L') {
                index = x;
                c -= vn[x].first;
                if (c < 0)
                    break;
                flag = true;
                ans++;
                break;
            }
        }
        if (!flag) {
            lli mn = v[0];
            lli index = 0;
            for (int x = 0; x < n; x++) {
                if(v[x]+x+1<mn){
                    mn = v[x] + x + 1;
                    index = x;
                }
            }
            if(c<mn){
                cout << 0<<endl;
            }
            else{
                c -= mn;
            }
            vector<pair<lli, char>> nv;
            for (int x = 0; x < n; x++) {
                if(x==index)
                    continue;
                if (v[x] + x + 1 <= v[x] + n - x) {
                    nv.pb({v[x] + x + 1, 'L'});
                } else {
                    nv.pb(  {v[x] + n - x, 'R'});
                }
            }
            sort(vn.begin(), vn.end());
            for (int x = 0; x < nv.size(); x++) {
                c -= vn[x].first;
                if (c < 0)
                    break;
                ans++;
            }

        } else {
            // cout << "here";
            for (int x = 0; x < n; x++) {
                if (x == index)
                    continue;

                c -= vn[x].first;
                if (c < 0)
                    break;
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
