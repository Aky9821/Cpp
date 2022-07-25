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
        int n;
        cin >> n;
        cout << n<<endl;
        vector<int> v;
        REP(x, n) {
            int t;
            cin >> t;
            v.pb(t);
        }
        sort(v.begin(), v.end());
        REP(x, n) {
            cout << x+1 << " " << v[x] << endl;
        }
    }
    return 0;
}