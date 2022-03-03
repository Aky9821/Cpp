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
    vector<vector<int>> threeSum(vector<int> &nums) {
        int s = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int x = 0; x < s - 2; x++) {
            if (x == 0 || nums[x] != nums[x - 1]) {
                int l = x + 1;
                int r = s - 1;
                while (l < r) {
                    int sum = nums[l] + nums[r];
                    if (sum == -nums[x]) {
                        vector<int> t;
                        t.pb(nums[x]);
                        t.pb(nums[l]);
                        t.pb(nums[r]);
                        ans.pb(t);
                        while (l < r && nums[l + 1] == nums[l])
                            l++;
                        while (l < r && nums[r - 1] == nums[r])
                            r--;
                        l++;
                        r++;
                    } 
                    else if (sum < -nums[x])
                        l++;
                    else
                        r--;
                }
            }
        }
        return ans;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        vector<int> v = {-1, 0, 1, 2, -1, -4};
        ob.threeSum(v);
    }
    return 0;
}
