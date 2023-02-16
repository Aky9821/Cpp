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
        string s;
        cin >> s;
        map<int, int> mp;
        vector<lli> pref(n);
        int c = 0;
        for (int x = 0; x < n;x++){
            if(mp.find(s[x])==mp.end()){
                mp[s[x]] = 1;
                c++;
            }
            else{
                mp[s[x]]++;
            }
            pref[x] = c;
        }
        c = 0;
        lli ans = 0;
        for(auto it:pref)
            // cout << it << " ";
        mp.clear();
        for (int x = n - 1; x > 0; x--) {
            if (mp.find(s[x]) == mp.end()) {
                mp[s[x]] = 1;
                c++;
            } else {
                mp[s[x]]++;
            }
           // cout << c << " x";
            ans = max(ans, c + pref[x - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}