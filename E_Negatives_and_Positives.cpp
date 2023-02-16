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
        cin >> n;
        vector<lli> v(n);
        int ne = 0;
        lli sum = 0;
        lli mn = INT_MAX;
        REP(x, n) {
            cin >> v[x];
            if(v[x]<0){
                ne++;
            }
            sum += abs(v[x]);
            mn = min(mn, abs(v[x]));
        }
        //cout << ne << endl;
        if (ne % 2 == 0) {
           cout << sum << endl;
        } else {
            cout << sum - 2*mn << endl;
        }
    }
    return 0;
}