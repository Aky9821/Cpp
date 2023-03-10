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
bool mycp(pair<lli,lli>&p1,pair<lli,lli>&p2){
     return p1.second < p2.second;
}
int main() {

#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif

    int n;
    cin>>n;
    vector<pair<lli,lli>> v(n);
    REP(x,n){
        cin >>v[x].first>>v[x].second;
    }
    sort(v.begin(), v.end(),mycp);
    for(auto it:v){
        cout << it.first << " " << it.second << endl;
    }
    int prev = -1;
    int ans = 0;
    for (int x = 0; x < n; x++) {
        if(v[x].first>=prev){
            prev = v[x].second;
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}