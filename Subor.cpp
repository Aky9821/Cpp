#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 998244353
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
        string s;
        int n;
        cin >> n >> s;
        vector<int> v(n);
        int y = 1;
        for (int x = n - 1; x >= 0;x--,y++){
            if(s[x]=='1'){
                v[n - 1] += x + 1;
                if(n-y-1>=0)
                    v[n - 1 - y] -= (x + 1);
            }
        }
        for (int x = n - 2; x >= 0;x--){
            v[x] += v[x + 1];
        }
        int ans = 0;
        int p = 1;
        for (int x = n - 1; x >= 0;x--){
            if(v[x]%2){
                ans = (ans%mod+p%mod)%mod;
            }
            p = (p%mod* 2)%mod;
        }
        cout << ans << endl;
    }
    
    return 0;
}