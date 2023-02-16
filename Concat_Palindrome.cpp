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

bool can_form_palindrome(string A, string B) {
    vector<int> fa(26, 0);
    vector<int> fb(26, 0);
    for (auto ch : A) {
        fa[ch - 'a']++;
    }
    for (auto ch : B) {
        fb[ch - 'a']++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if ((fa[i] + fb[i]) % 2 != 0) {
            odd++;
            if (odd > 1) {
                return false;
            }
        }
    }

    string palindrome;
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        int freq = fa[i] + fb[i];
        if (freq % 2 == 1) {
            palindrome += ch;
            freq--;
        }
        for (int j = 0; j < freq / 2; j++) {
            palindrome += ch;
        }
    }
    if (palindrome.empty())
        return false;

    return true;
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
        lli a, b;
        cin >> a >> b;
        string s, t;
        cin >> s >> t;
        string ans = "NO";
        if (can_form_palindrome(s, t))
            ans = "YES";
        cout << ans << endl;
    }
    return 0;
}