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
        int a, b;
        cin >> a >> b;
        if (a == 0 || b == 0)
            cout << abs(a - b) << endl;
        else {
            int x = abs(a - b);
            cout << abs(x - 1) << endl;
        }
    }
    return 0;
}