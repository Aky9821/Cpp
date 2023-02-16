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
        string s;
        cin>>s;
        lli l = 0, r = n - 1;
      //  cout << s << endl;
        while (l < r) {
            if ((s[l] == '0' && s[r] == '1') || (s[r] == '0' && s[l] == '1')) {
                l++;
                r--;
            } else {
                break;
            }
        }
        lli c = 0;
       // cout << l << " " << r << endl;
        for (lli x = l; x <= r; x++) {
            c++;
        }
        cout << c << endl;
    }
    return 0;
}