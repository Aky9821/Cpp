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

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        int n;
        cin >> n;
        vector<int> v;
        REP(x,n){
            int t;
            cin >> t;
            v.pb(t);
        }
        vector<pair<int, int>> v2;
        REP(x,n-1){
            int t, u;
            cin >> t >> u;
            v2.pb({t, u});
        }
    }
    return 0;
}