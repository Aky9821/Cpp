#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> nearest(vector<vector<int>> grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dist(n, vector<int>(m, 0));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
        }
    }
    int dX[] = {-1, 0, 1, 0};
    int dY[] = {0, 1, 0, -1};
    while (!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        dist[row][col] = steps;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nr = row + dX[i];
            int nc = col + dY[i];
            if (nr >= 0 and nr < n and nc >= 0 and nc < m and vis[nr][nc] == 0) {
                q.push({{nr, nc}, steps + 1});
                vis[nr][nc] = 1;
            }
        }
    }
    return dist;
    // Code here
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid;
    for (int x = 0; x < n; x++) {
        vector<int> v;
        for (int y = 0; y < m; y++) {
            int t;
            cin >> t;
            v.push_back(t);
        }
        grid.push_back(v);
    }
    vector<vector<int>> ans = nearest(grid);
    int time = 0;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            if (grid[x][y] == 1) {
                time = max(time, ans[x][y]);
            }
        }
    }
   cout << time << endl;
    return 0;
}