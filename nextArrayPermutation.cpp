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
    void nextPermutation(vector<int>& nums) {
        int s = nums.size();
        int index = s - 1;
        int small = s - 1;
        for (int x = s - 1; x >= 0; x--) {
            if (nums[x] < nums[small] || nums[x] == 0) {
                index = x;
                cout << index << endl;
                break;
            } else if (x == 0 && index == small) {
                small--;
                index = small;
                x = small;
                if (index < 0) break;
            }
        }
        cout << index << " " << small << endl;
        if (index == small)
            sort(nums.begin(), nums.end());
        else {
            int t = nums[small];
            nums[small] = nums[index];
            nums[index] = t;
            sort(nums.begin() + index + 1, nums.end());
        }
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
        vector<int> v{4, 2, 0, 2, 3, 2, 0};
        ob.nextPermutation(v);
        REP(x, v.size())
        cout << v[x] << " ";
    }
    return 0;
}