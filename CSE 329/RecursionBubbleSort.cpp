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

void bubbleSort(vector<int> &v, int l) {
    if (l >= v.size() - 1)
        return;
    if (v[l] > v[l + 1])
        swap(v[l], v[l + 1]);
    bubbleSort(v, l + 1);
}

void bubbleHelper(vector<int> &v, int l) {
    if (l >= v.size() - 1)
        return;
    bubbleSort(v, 0);
    // cout << l << endl;
    bubbleHelper(v, l + 1);
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
        int n;
        cin >> n;
        vector<int> v;
        REP(x, n) {
            int t;
            cin >> t;
            v.pb(t);
        }
        bubbleHelper(v, 0);
        REP(x, n) {
            cout << v[x] << " ";
        }
    }
    return 0;
}