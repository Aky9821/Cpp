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
        string s;
        cin >> s;
        int c = 0;
        REP(x,n){
            if(s[x]=='0')
                c++;
        }
        REP(x,c){
            cout << '0';
        }
        REP(x, n - c)
        cout << '1';
        cout << endl;
    }
    return 0;
}