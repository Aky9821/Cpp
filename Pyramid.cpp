#include <bits/stdc++.h>
#define ld long double
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

    lli n, t;
    cin >> n >> t;
    vector<vector<ld>> v(n+1, vector<ld>(n+1, 0));
    int x = 0, y = 0;
    v[0][0] = t;
    int c = 0;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y <= x; y++) {
            //cout << v[x][y] << " ";
            if (v[x][y] > 1) {
                ld liq = v[x][y] - 1;
                c++;
                v[x + 1][y] += (double)liq / 2;
                v[x + 1][y + 1] += (double)liq / 2;
            } else if (v[x][y] == 1)
                c++;
        }
        //cout << endl;
    }
    cout << c;
    return 0;
}