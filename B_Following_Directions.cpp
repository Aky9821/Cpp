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
        int i = 0, j = 0;
        bool flag = false;
        for (auto it : s) {
            int x = 0, y = 0;
            if (it == 'U') {
                x++;
            }
            if(it=='D'){
                x--;
            }
            if(it=='R'){
                y++;
            }
            if(it=='L'){
                y--;
            }
            i += x;
            j += y;
            if(i==1&&j==1){
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}