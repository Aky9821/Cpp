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
        lli n;
        cin>>n;
        vector<lli>v;
        REP(x,n){
            lli t;
            cin>>t;
            v.pb(t);
        }
        REP(x,n){
            if(x!=0&&x!=n-1){
                v[x + 1] = v[x + 1] ^ v[x] ^ v[x - 1];
                v[x] = v[x - 1];
            }
        }
        for (int x = n - 2; x > 0;x--){
            v[x - 1] = v[x - 1] ^ v[x] ^ v[x + 1];
            v[x] = v[x + 1];
        }
        bool flag = true;
        lli p = v[0];
        for (auto it:v) {
            if(it!=p)
                flag = false;
        }
        if(flag)
            cout << "YES"<<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}