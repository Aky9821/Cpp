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
    void printN(int n) {
        if (n > 1)
            printN(n - 1);
        cout << n << endl;
    }
    string reverse(string s) {
        int l = s.length();
        if (l == 1)
            return s;
        return s[l - 1] + reverse(s.substr(0, l - 1));
    }
    bool isPalindrome(string s, int l, int r) {
        cout << l << " " << r << endl;
        cout << s[l] << " " << s[r] << endl;

        if (l >= r)
            return true;
        if (s[l] == s[r]) {
            return isPalindrome(s, l + 1, r - 1);
        }
        return false;
    }
    int sum(int n){
        if(n==0)
            return 0;
        return n % 10 + sum(n / 10);
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
        cout << ob.sum(123456789);
    }
    return 0;
}