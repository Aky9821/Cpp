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

int minSteps(int n) {
    int x = 1;
    while(true)  {
        if (n >= -x * (x + 1) / 2 && n <= x * (x + 1) / 2 && (n & 1) == ((x * (x + 1) / 2) & 1)) {
            return x;
        }
       x++;
    }
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
        int n;

        REP(x, 100) {
            if (x != 0)
                cout << x << " " << minSteps(x) << endl;
        }
    }
    return 0;
}