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
        lli n, c;
        cin >> n >> c;
        vector<lli> v(n);
        REP(x,n){
            cin >> v[x];
        }
        vector<lli> nv(n);
        for (int x = 0; x < n;x++){
            nv[x] = v[x] + x + 1;
        }
        sort(nv.begin(), nv.end());
        lli ans = 0;
        for (int x = 0; x < n; x++) {
            c -= nv[x];
            if(c<0)
                break;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}