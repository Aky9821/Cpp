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

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        int n = 4;
        vector<lli> v(4);
        REP(x, n) {
            cin >> v[x];
        }
        lli alice = 0, bob = 0;
        int ans = 0;
        while (alice >= 0 && bob >= 0) {
            if (alice == 0 && bob > 0 && v[1] > 0) {
                alice++;
                bob--;
                v[1]--;
            }

            else if (alice > 0 && bob == 0 && v[2] > 0) {
                alice--;
                bob++;
                v[2]--;
            } else if (alice > 0 && bob > 0 && v[3] > 0) {
                alice--;
                bob--;
                v[3]--;
            } else if ( v[0] > 0) {
                alice++;
                bob++;
                v[0]--;
            } else {
                for(auto it:v){
                    if(it>0){
                        ans++;
                        break;
                    }
                }
                break;
            }

            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}