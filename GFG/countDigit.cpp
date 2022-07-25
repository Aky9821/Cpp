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
    bool isPrime(int n) {  // O(sqrt n)
        if (n == 1)
            return false;
        else if (n == 2 || n == 3)
            return true;
        else if (n % 2 == 0 || n % 3 == 0)
            return false;
        else
            for (int x = 5; x * x <= n; x += 6)
                if (n % x == 0 || n % (x + 2) == 0)
                    return false;

        return true;
    }
    int gcdEuclidean(int a, int b) {  // O(log(min(a,b)))
        if (b == 0)
            return a;
        else
            gcdEuclidean(b, a % b);
    }
    int countDigit(lli n) {
        return floor(log10(n) + 1);
    }
    int lcm(int a, int b) {
        return (a * b) / gcdEuclidean(a, b);
    }

    void primeFactors(int n) {  // O(sqrt n)
        if (n <= 1)
            return;
        while (n % 2 == 0) {
            cout << 2 << endl;
            n /= 2;
        }
        while (n % 3 == 0) {
            cout << 3 << endl;
            n /= 3;
        }

        for (int x = 5; x * x <= n; x += 6) {
            if (isPrime(x)) {
                while (n % x == 0) {
                    cout << x << endl;
                    n /= x;
                }
            }
            if (isPrime(x + 2)) {
                while (n % (x + 2) == 0) {
                    cout << x + 2 << endl;
                    n /= (x + 2);
                }
            }
        }
        if (n > 1)
            cout << n << endl;
    }
    void sieve(int n) {  // O(nlog log n)
        vector<int> v;
        for (int x = 0; x <= n; x++) {
            v.pb(1);
        }
        v[0] = v[1] = 0;
        for (int x = 2; x * x <= n; x++) {
            if (v[x] == 1) {
                for (int y = x * x; y <= n; y += x)
                    v[y] = 0;
            }
        }
        REP(x, n)
        if (v[x])
            cout << x << " ";
    }
    lli power(lli a, lli b) {  // O(log n)//Space log n
        if (b == 0)
            return 1;
        int pow = power(a, b / 2);
        pow *= pow;
        if (b % 2 == 0)
            return pow;
        else
            return pow * a;
    }
    lli iterativePower(lli a, lli b) {//O(log n) //Space O(1)
        lli result = 1;
        while (b > 0) {
            if (b % 2 != 0) 
                result = result * a;
            
            a *= a;
            b /= 2;
        }
        return result;
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
        cout << ob.iterativePower(7, 100);
    }
    return 0;
}