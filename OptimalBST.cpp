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
int sum(vector<int>value, int low, int high) {  // sum of frequency from low to high range
    int sum = 0;
    for (int k = low; k <= high; k++)
        sum += value[k];
    return sum;
}
int optimalBST(vector<int> key, vector<int> value, int n) {
    vector<vector<int>> matrix;
    REP(x, n + 1) {
        vector<int> t;
        REP(y, n + 1)
        t.pb(0);
        matrix.pb(t);
    }
    REP(x, n + 1) {
        matrix[x][x] = 0;
    }
    /*for (int x = 0; x < 3; x++) {
        for (int y = 1; y < 4; y++) {
            if (y - x == 1)
                matrix[x][y] = value[y];
        }
    }*/
    /*for (int x = 0; x < n + 1; x++) {
        for (int y = 0; y < n + 1; y++) {
            if (y - x == 1) {
                matrix[x][y] = value[y - 1];
            }
        }
    }
    */
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length + 1; i++) {  // from 0th row to n-length+1 row as i
            int j = i + length - 1;
            matrix[i][j] = INT_MAX;  // initially store to infinity

            for (int r = i; r <= j; r++) {
                // find cost when r is root of subtree
                int c = ((r > i) ? matrix[i][r - 1] : 0) + ((r < j) ? matrix[r + 1][j] : 0) + sum(value, i, j);
                if (c < matrix[i][j])
                    matrix[i][j] = c;
            }
        
            REP(x, n + 1) {
                REP(y, n + 1)
                cout << matrix[x][y] << "\t";
                cout << endl;
            }
        }
    }
    return 0;
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
        vector<int> key = {50, 60, 70, 80};
        vector<int> value = {4, 2, 6, 3};
        int n = key.size();
        optimalBST(key, value, n);
    }
    return 0;
}