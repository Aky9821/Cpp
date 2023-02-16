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

void possibleString(string s, int index, string ans, set<string>& st) {
    if (index == s.length()) {
        st.insert(ans);
        // cout << ans << endl;
        return;
    }
    possibleString(s, index + 1, ans, st);

    possibleString(s, index + 1, ans + s[index], st);
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
        // cout << s;
        string ans = "";
        set<string> st;
        possibleString(s, 0, ans, st);
        reverse(s.begin(), s.end());
        possibleString(s, 0, ans, st);

        // sort(st.begin(), st.end());
        for (auto it : st) {
            cout << it << " " << endl;
        }
    }
    return 0;
}