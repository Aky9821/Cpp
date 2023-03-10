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

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, m;
    cin >> n >> m;
    pair<lli, lli> start, target;
    vector<vector<char>> v(1000, vector<char>(1000));
    REP(x, n) {
        REP(y, m) {
            cin >> v[x][y];
            if (v[x][y] == 'A')
                start = {x, y};
            if (v[x][y] == 'B')
                target = {x, y};
        }
    }
    queue< pair<lli, lli>>q;
    int ccc = 0;
    q.push( start);
    while (!q.empty()) {
        // ccc++;
        // cout << ccc << endl;
        vector<pair<int, int>> ind{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        //string c = q.front().first;
        lli x = q.front().first;
        lli y = q.front().second;
        // cout << x << " " << y << " " << c << endl;

        v[x][y] = '#';
        q.pop();

        for (auto it : ind) {
            int i = x + it.first;
            int j = y + it.second;
            char ch;
            if (it.first == 0) {
                if (it.second == 1)
                    ch = 'R';
                else
                    ch = 'L';
            } else {
                if (it.first == 1)
                    ch = 'D';
                else
                    ch = 'U';
            }
            if (i >= 0 && i < n && j >= 0 && j < m) {
                if (v[i][j] == 'B') {
                    cout << "YES"
                         << "\n";
                   
                    return 0;
                }
                if (v[i][j] != '#') {
                    q.push( {i, j});
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}