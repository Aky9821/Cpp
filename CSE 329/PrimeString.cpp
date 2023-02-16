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

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int x = 0; x < s.length(); x++) {
            if (mp.find(s[x]) == mp.end())
                mp[s[x]] = 1;
            else
                mp[s[x]]++;
        }

        map<int, int> prime = sieve(s.length());
        int c = 0;
        for (auto it : mp) {
            c++;
        }
        bool flag = true;
        if (prime.find(c) != prime.end()) {
            for (auto it : mp) {
                if (prime.find(it.second) == prime.end()) {
                    flag = false;
                    break;
                }
            }
        }
        else
            flag = false;
        if (flag)
            cout << "YES"<<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}