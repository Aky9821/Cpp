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

lli sum(lli n) {
    lli c = 0;
    for (lli x = n; x > 0; x /= 10)
        c += x % 10;
    return c;
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

        for (int n = 1; n <= 100; n++) {
            bool flag = false;
            for (int x = 1; x <= 9; x++) {
                if (abs(sum(n - x) - x) <= 1) {
                    flag = true;
                    //  cout << n - x << " " << x << endl;
                    break;
                }
            }
            if (!flag)
                cout << n << endl;
        }
    }
    return 0;
}