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
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int x = 2; x * x <= n; x++) {
        if (n % x == 0)
            return false;
    }
    return true;
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
        cin >> n;
        bool flag = true;
        if (isPrime(n)) {
            for (int x = n; x > 0; x /= 10) {
                if (!isPrime(x % 10)) {
                    flag = false;
                    break;
                }
            }
        } else
            flag = false;
        cout << flag << endl;
    }
    return 0;
}