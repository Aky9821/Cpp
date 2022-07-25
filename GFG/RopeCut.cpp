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
    int cutRope(int n, int a, int b, int c) {
        // cout << n << endl;
        if (n == 0)
            return 0;
        if (n < 0)
            return -1;
        int x = cutRope(n - a, a, b, c);
        int y = cutRope(n - b, a, b, c);
        int z = cutRope(n - c, a, b, c);
        if (x == -1 && y == -1 && z == -1)
            return -1;
        return max(x + 1, max(y + 1, z + 1));
        // return 0;
    }
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
        cout << ob.cutRope(9, 2, 2, 2);
    }
    return 0;
}