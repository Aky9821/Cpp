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
        string s, t;
        cin >> s >> t;
        string ans = "";
        int l = s.length();
        REP(x, l) {
            if (s[x] == t[x])
                ans += "G";
            else
                ans += "B";
        }
        cout << ans << endl;
    }
    return 0;
}