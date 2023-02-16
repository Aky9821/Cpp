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

    int n;
    cin >> n;
    vector<lli> v(n);
    REP(x, n) {
        cin >> v[x];
    }
    sort(v.begin(), v.end());
    lli sum = 1;
    for (int x = 0; x < n;x++){
        if(sum<v[x]){
            cout << sum<< endl;
            return 0;
        }
        sum += v[x];
    }
    cout << sum <<endl;
    return 0;
}