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
};
lli DFS(int x, int y, int n, int m, vector<vector<lli>> &v, vector<vector<bool>> &visit) {
    if (x == n - 1 && y == m - 1)
        return 1;
    visit[x][y] = true;
    vector<pair<int, int>> ind{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    vector<pair<int, int>> spind{{0, 1}, {1, 0}, {-1, 0}, {0, -1}, {-1, -1}, {1, 1}, {-1, 1}, {1, -1}};
    lli ans = INT_MAX;
    if (v[x][y] == 1) {
        for (auto it : spind) {
            int i = it.first + x;
            int j = it.second + y;
            if (i >= 0 && i < n && j >= 0 && j < m && !visit[i][j]) {
                ans = min(ans, DFS(i, j, n, m, v, visit));
            }
        }
    } else {
        for (auto it : ind) {
            int i = it.first + x;
            int j = it.second + y;
            if (i >= 0 && i < n && j >= 0 && j < m && !visit[i][j]) {
                ans = min(DFS(i, j, n, m, v, visit), ans);
            }
        }
    }
    visit[x][y] = false;
    return ans + 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        lli n, m, k;
        cin >> n >> m >> k;
        vector<vector<lli>> v(n + 1, vector<lli>(m + 1, 0));
        vector<vector<bool>> visit(n + 1, vector<bool>(m + 1, false));

        REP(x, k) {
            lli i, j;
            cin >> i >> j;
            v[i - 1][j - 1] = 1;
        }
        cout << DFS(0, 0, n, m, v, visit)-1<<endl;
    }
    return 0;
}