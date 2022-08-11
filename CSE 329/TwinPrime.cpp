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
void sieve(int n) {  // O(nlog log n)
    vector<int> v;
    for (int x = 0; x <= n; x++) {
        v.pb(1);
    }
    v[0] = v[1] = 0;
    for (int x = 2; x * x <= n; x++) {
        if (v[x] == 1) {
            for (int y = x * x; y <= n; y += x)
                v[y] = 0;
        }
    }
    vector<int> p;
    REP(x, n) {
        if (v[x])
            p.pb(x);
    }
    REP(x,p.size()-1){
        if(p[x]-p[x+1]==-2)
            cout << p[x] << " " << p[x + 1] << endl;
    }
    }
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
        sieve(n);
    }
    return 0;
}