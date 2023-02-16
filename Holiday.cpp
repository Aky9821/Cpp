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

int rep(vector<int> &p, int y) {
    int cnt = 0;
    int x = y;
    while (x != -1) {
        ++cnt;
        x = p[x];
        if (x == y) return cnt;
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

   
    int n, k;
    vector<vector<int>> v;
    REP(x, n) {
        vector<int> t;
        REP(x,k){
            int tr;
            cin >> tr;
            t.pb(tr);
        }
        v.pb(t);
    }
    for (int x = 1; x <= n;x++){
        int d = 0;
        
    }
        return 0;
}

