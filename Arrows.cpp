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
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int ans = 0, arrow = 0;
        REP(x, points.size()) {
            if(ans==0||points[x][0]>arrow){
                ans++;
                arrow = points[x][1];
            }
        }
        return ans;
    }
    bool compare(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
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
    }
    return 0;
}