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
void DFS(int x, int y, int dx, int dy, bool &ans) {
    if (x > dx || y > dy) {
        return;
    }
    if (x == dx && y == dy){
        ans = true;
        return;
    }
    DFS(x + 1, y, dx, dy, ans);
        DFS(x, y + 1, dx, dy, ans);
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
        int sx, sy, dx, dy;
        cin >> sx >> sy >> dx >> dy;
        bool flag = true;
        if (sx > dx || sy > dy)
            flag = false;
        else {
            flag = false;
            DFS(sx, sy, dx, dy, flag);
        }

        cout << flag;
    }
    return 0;
}