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
int primeFactors(int n) {  //h
    if (n <= 1)
        return 0;
    int factors = 0;
    while (n % 2 == 0) {
        // cout << 2 << endl;
        factors++;
        n /= 2;
    }
    while (n % 3 == 0) {
        // cout << 3 << endl;
        factors++;
        n /= 3;
    }

    for (int x = 5; x * x <= n; x += 6) {
        if (isPrime(x)) {
            while (n % x == 0) {
                // cout << x << endl;
                factors++;
                n /= x;
            }
        }
        if (isPrime(x + 2)) {
            while (n % (x + 2) == 0) {
                // cout << x + 2 << endl;
                factors++;
                n /= (x + 2);
            }
        }
    }
    if (n > 1)
        factors++;
    // cout << n << endl;
    return factors;
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
        int n, k;
        cin >> n >> k;
        int fact = primeFactors(n);
        if (fact == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    return 0;
}