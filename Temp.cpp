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
        vector<lli> v;
        map<lli, lli> mp;
        REP(x,n){
            lli t;
            cin >> t;
            mp[t]++;
        }
        lli ans = 0;
        for(auto it:mp){
            ans += ((it.second * (it.second - 1)) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}