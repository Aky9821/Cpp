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
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int x = 0, y = 0;
        string sub = "", longestSub = "";

        while (x < s.length()) {
            if (mp.find(s[x]) == mp.end() || mp[s[x]] == 0) {
                mp[s[x]] = 1;
                sub += s[x++];
                if (longestSub.length() < sub.length())
                    longestSub = sub;
                //cout << sub << endl;

            } else {
                mp[s[y]] = 0;
               // cout << s[x];
                sub = sub.substr(1, sub.length() - 1);
                //cout << "\t" << sub << endl;
                y++;
            }
        }

        return longestSub.length();
    }
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
        cout << ob.lengthOfLongestSubstring("abcabcbb");
    }
    return 0;
}