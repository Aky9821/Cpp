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
void pairs(vector<int> v,int n){
    sort(v.begin(), v.end());
    for (int x = 0; x < v.size();x++){
        int l = 0, r = v.size() - 1;
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(v[mid]==n-v[x]){
                cout << v[mid] << " " << v[x] << endl;
                break;
            } else if (v[mid] > n - v[x]) {
                r = mid-1;
            } else {
                l = mid + 1;
            }
        }
    }
}

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
        vector<int> v;
        REP(x,n){
            int t;
            cin >> t;
            v.pb(t);
        }
        int x;
        cin >> x;
        pairs(v, x);
    }
    return 0;
}