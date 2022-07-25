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
        int n;
        cin >> n;
        int ans = 0;
        if(n<6)
            ans = 0;
        else if(n==6)
            ans = 1;
        else{
            n = n - 6;
            ans = n / 7 + 1;
        }
        cout << ans << endl;
    }
}