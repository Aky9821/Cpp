
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
    int x;
    cin >> x;
    int ans = 0;
    long pal = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        pal = pal * 10 + pop;
    }
    cout << pal==x;
    return 0;
}