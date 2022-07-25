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

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        int n;
        cin >> n;
        vector<int> w;
        for (int x = 0; x < n; x++) {
            int t;
            cin >> t;
            w.push_back(t);
        }
        vector<int> pt, nt;
        for (int x = 0; x < n; x++) {
            if (w[x] >= 0)
                pt.push_back(w[x]);
            else
                nt.push_back(w[x]);
        }
        sort(pt.begin(), pt.end(),greater<int>());
        sort(nt.begin(), nt.end(),greater<int>());
        int l = min(nt.size(), pt.size());
        int sum = 0, mxSum = 0;
        for (int x = 0; x<l; x++) {
            sum += pt[x] + nt[x];
            cout << pt[x] << " " << nt[x]<<endl;
            mxSum = max(mxSum, sum);
        }
        cout << mxSum << endl;
    }
    return 0;
}