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
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        int s = nums.size();
        for (int x = 0; x < s; x++) {
            if (mp.find(nums[x]) != mp.end()) {
                mp[nums[x]] = x;
            }
        }
        vector<int> ans;
        for (int x = 0; x < s - 1; x++) {
            if (mp.find(target - nums[x]) != mp.end()) {
                if (mp[target - nums[x]] > x) {
                    ans.push_back(x);
                    ans.push_back(mp[target - nums[x]]);
                }
            }
        }
        return ans;
    }


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
        int n,target;
        vector<int>v;
        cin >> n>> target;
        REP(x, n) {
            int t;
            cin >> t;
            v.pb(t);
        }
        vector<int> ans = ob.twoSum(v, target);
        REP(x,ans.size())
        cout << ans[x] << "/t";
    }
    return 0;
}