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
    bool isAlphabaticOrder(string s) {
        // length of the string
        int n = s.length();

        // create a character array
        // of the length of the string
        char c[n];

        // assign the string
        // to character array
        for (int i = 0; i < n; i++) {
            c[i] = s[i];
        }

        // sort the character array
        sort(c, c + n);

        // check if the character array
        // is equal to the string or not
        for (int i = 0; i < n; i++)
            if (c[i] != s[i])
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
            int n;
            cin >> n;
            string s;
            cin >> s;
            string ans = "NO";
            if (isAlphabaticOrder(s))
                ans = "YES";
            else {
                for (int x = 0; x < n / 2; x++) {
                    if (s[x] > s[n - 1 - x]) {
                        char c = s[x];
                        s[x] = s[n - 1 - x];
                        s[n - 1 - x] = c;
                    }
                }
            }
            // cout << s;
            if (isAlphabaticOrder(s))
                ans = "YES";
            cout << ans << endl;
        }
        return 0;
    }