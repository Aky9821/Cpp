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
        lli x, y;
        cin >> x >> y;
        lli n = x * y - x - y;
        if (n == -1) {
            n = max(x, y) - 1;
        } else if (n == 0)
            n = 2;
        if (n == 0)
            n = 5;
        cout << n << endl;
    }
    return 0;
}