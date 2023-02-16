#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x,n) for (int x = 0; x < n; x++)

using namespace std;

class Solution {
    public:
        

};

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif

    int n;
    cin>>n;
    vector <lli>v(n);
    lli sum = 0;
    REP(x, n) {
        cin >> v[x];
    }
    sort(v.begin(), v.end());
    lli mid = 0;
    if (n % 2 == 0) {
        int md = n / 2;
        mid = (v[md - 1] + v[md]) / 2;
    }
    else{
        int md = n / 2;
        mid = (v[md]);
    }
    lli ans = 0;
    for (auto it : v) {
        ans += abs(mid - it);
    }
    cout << ans << endl;
    return 0;
}