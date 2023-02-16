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

bool cmp(pair<int, int>& a,
         pair<int, int>& b) {
    return a.second < b.second;
}
map<int, int> sieve(int n) {  // O(nlog log n)
    vector<int> v;
    for (int x = 0; x <= n; x++) {
        v.pb(1);
    }
    v[0] = v[1] = 0;
    for (int x = 2; x * x <= n; x++) {
        if (v[x] == 1) {
            for (int y = x * x; y <= n; y += x)
                v[y] = 0;
        }
    }
    map<int, int> mp;
    REP(x, n) {
        if (v[x])
            mp[x] = 1;
    }
    return mp;
}
void update(int n, map<int, int>& mp) {
    for (int x = n; x > 0; x /= 10) {
        if (mp.find(x % 10) == mp.end())
            mp[x % 10] = 1;
        else
            mp[x % 10]++;
    }
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
        map<int, int> mp = sieve(n);
        map<int, int> digit;

        for (auto it : mp) {
            update(it.first, digit);
        }
        vector<pair<int, int>> v;
        for (auto it : digit) {
            pair<int, int> t;
            t = {it.second, it.first};
            v.pb(t);
        }
        sort(v.begin(), v.end(),greater<int>());
        cout << v[0].second << " " << v[0].first << endl;
    }
}