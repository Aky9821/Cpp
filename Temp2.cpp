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
    int minCostClimbingStairs(vector<int>& cost) {
        int s = cost.size();
        int one = cost[0], two = cost[1];
        if (s <= 2)
            return min(one, two);
        else {
            for (int x = 2; x < s; x++) {
                int c = cost[x] + min(one, two);
                one = two;
                two = c;
            }
        }
        return min(two, one);
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    Solution ob;
    vector<int> cost {10, 15, 20};
    cout<<ob.minCostClimbingStairs(cost);
    return 0;
}