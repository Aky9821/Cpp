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

    string s;
    cin >> s;
    int n = s.length();
    string srt = s;
    sort(srt.begin(), srt.end());
    map<char, vector<int>> mp;
    for (int x = 0; x < n; x++) {
        mp[s[x]].push_back(x);
    }
    stack<char> st;
    int ele = 0;
    string ans = "";
    for (int x = 0; x < n; x++) {
        if (s[x] != srt[ele]) {
            st.push(s[x]);
        } else {
            ans += s[x];
            while (ele < n - 1 && x < n) {
                ele++;
                auto it = upper_bound(mp[srt[ele]].begin(), mp[srt[ele]].end(), x) - mp[srt[ele]].begin();
                if (it == mp[srt[ele]].size()) {
                    while (!st.empty() && st.top() != srt[ele]) {
                        if (x == n - 1 || s[x + 1] >= st.top()) {
                            ans += st.top();
                            st.pop();
                        } else {
                            ans += s[x + 1];
                            x++;
                        }
                    }
                    if (!st.empty()) {
                        ans += st.top();
                        st.pop();
                    }

                } else {
                    break;
                }
            }
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    return 0;
}