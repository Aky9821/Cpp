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
    int maxSubArray(vector<int>& nums) {
        int s = nums.size();
        int sum = 0, maxSum = 0;
        bool negative = true;
        for (int x = 0; x < s; x++) {
            if (nums[x] >= 0)
                negative = false;
            sum += nums[x];
            cout << sum << endl;
            maxSum = max(sum, maxSum);
            if (sum < 0)
                sum = 0;
        }
        if (negative) {
            maxSum = nums[0];
            for (int x = 1; x < s; x++)
                maxSum = max(nums[x], maxSum);
        }
        return maxSum;
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
        vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};
        cout<<ob.maxSubArray(v);
        
    }
    return 0;
}