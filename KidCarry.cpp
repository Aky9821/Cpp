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
        lli n, k;
        cin >> n >> k;
        vector<lli> v;
        REP(x, n) {
            lli t;
            cin >> t;
            v.pb(t);
        }
        sort(v.begin(), v.end());
        lli aSum = 0;
        for (int x = 0; x < k; x++) {
            aSum += v[x];
        }
        lli bSum = 0;
        for (int x = k; x < n; x++) {
            bSum += v[x];
        }
        lli g1 = abs(aSum - bSum);
        sort(v.begin(), v.end(),greater<int>());
         aSum = 0;
        for (int x = 0; x < k; x++) {
            aSum += v[x];
        }
         bSum = 0;
        for (int x = k; x < n; x++) {
            bSum += v[x];
        }
        lli g2 = abs(aSum - bSum);
        cout << max(g1, g2) << endl;
    }
    return 0;
}