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

bool mycp(pair<lli, char>& p1, pair<lli, char>& p2) {
    return p1.first < p2.first;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    // int T;
    // cin >> T;
    // while (T--) {
        Solution ob;
        lli n;
        cin >> n;
        vector<vector<lli>> v(n, vector<lli>(2));
        REP(x, n) {
            cin >> v[x][0] >> v[x][1];
        }
        vector<pair<lli, char>> nv(2 * n);
        int x = 0;
        for (auto it : v) {
            nv[x++] = {it[0], 'a'};
            nv[x++] = {it[1], 'd'};
        }
        sort(nv.begin(), nv.end());
        lli sum = 0;
        lli ans = 0;
        for (auto it : nv) {
            if(it.second=='a')
                sum += 1;
            else
                sum -= 1;
            ans = max(ans, sum);
        }
        cout << ans << endl;
        //}
        return 0;
}