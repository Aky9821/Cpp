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

    lli n;
    cin >> n;
    vector<lli> v(n);
    pq<lli> q;
    lli sum = 0;
    REP(x, n) {
        cin >> v[x];
        q.push(v[x]);
        sum += v[x];
    }
    lli k;
    lli take = 0;
    cin >> k;
    while(k--){
        lli t = q.top();
        q.pop();
        lli tae = floor(sqrt(t));
        take += t - tae;
        q.push(tae);
    }
    cout << sum - take << endl;
    return 0;
}