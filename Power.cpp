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
int power(int x, int n) {
    return (int)pow(x, n);
}
int solve(int x, int n, int N) {
        if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (x > n)
        return 0;

    int pw = power(x, N);
    int take = 0;
    if (pw <= n)
        take = solve(x + 1, n - pw, N);
    int notTake = solve(x + 1, n, N);
    // return take + notTake;
    return take + notTake;
}

int powerSum(int X, int N) {
    return solve(1, X, N);
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
        int n, x;
        cin >> n >> x;
        cout << powerSum(n, x);
    }
    return 0;
}