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
        int n, x;
        cin >> n >> x;
        if (x > n * 3)
            cout << "NO" << endl;
        if (x % 3 == 0) {
            cout << "YES" << endl;
            int z = x / 3;
            cout << z << " " << 0 << " " << n - z << endl;
        } else if (x % 3 == 1) {
            int z = x / 3;
            if (n * 3 >= x + 8) {
                cout << "YES" << endl;
                cout << z + 1 << " " << 2 << " " << n - (z + 1) - 2 << endl;
            } else
                cout << "NO" << endl;
        } else if (x % 3 == 2) {
            if (n * 3 >= x + 4) {
                cout << "YES" << endl;
                int z = x / 3;
                cout << z + 1 << " " << 1 << " " << n - (z + 1) - 1 << endl;
            }
            else{
                cout << "NO" << endl;
            }
        } else
            cout << "NO" << endl;
    }
    return 0;
}