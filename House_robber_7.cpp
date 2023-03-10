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
lli solve(lli x, vector<lli>& v, vector<lli>& ax) {
    if (x >= v.size())
        return 0;
    
    lli l = 0, r = 0;
    if ((x * 2) < v.size())
        l = solve(x * 2, v, ax);
    if ((x * 2 + 1) < v.size() )
        r = solve(x * 2 + 1, v, ax);
    if(ax[x]==1)
    return v[x] + max(l, r);
    return max(l, r);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    lli n;
    cin >> n;
    vector<lli> v(n + 1), ax(n + 1);
    for (int x = 1; x < n + 1; x++)
        cin >> v[x];
    for (int x = 1; x < n + 1; x++)
        cin >> ax[x];
    cout << solve(1, v, ax) << endl;
    return 0;
}