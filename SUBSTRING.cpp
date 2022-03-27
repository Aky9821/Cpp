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
        string s;
        cin >> s;
        int l = s.length();
        int c= 0;
        int maxC = 0;
        for (int x = 0; x < l;x++){
            if(s[x]!=s[0]&&s[x]!=s[l-1])
                c++;
            else
                c = 0;
            maxC = max(c, maxC);
        }
        if (maxC==0)
            cout << -1 << endl;
        else
            cout << maxC << endl;
    }
    return 0;
}