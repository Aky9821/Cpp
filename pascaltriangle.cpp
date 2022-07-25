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
     vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
         vector<int> t;
         t.push_back(1);
         ans.push_back(t);
         if (numRows == 1) {
             return ans;
         } else {
             for (int x = 1; x < numRows; x++) {
                 vector<int> t;
                 for (int y = 0; y <= x; y++) {
                     if (y == 0 ||y == x) {
                         t.push_back(1);
                     } else {
                         if (y - 1 >= 0)
                             t.push_back(ans[x - 1][y] + ans[x - 1][y - 1]);
                         else
                             t.push_back(ans[x - 1][y]);
                     }
                 }
                 ans.push_back(t);
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
        vector<vector<int>> ans;
        ans = ob.generate(6);
        REP(x,ans.size()){
            REP(y,ans[x].size())
            cout << ans[x][y] << " ";
            cout << endl;
        }
    }
    return 0;
}