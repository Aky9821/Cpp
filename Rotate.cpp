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
        vector<int> nums;
        int n,k;
        cin>>n>>k;

        REP(x,n){
            int t;
            cin >> t;
            nums.pb(t);
        }




        int s = nums.size();
        k = k % s;

        vector<int> ans;
        REP(x,s){
            ans.pb(0);
        }
        int y = k;
        REP(x, n) {
            ans[y] = nums[x];
            y++;
            y = y % s;
        
        }
        nums = ans;
        REP(x, n)
        cout << ans[x] << endl;
    }
    return 0;
}