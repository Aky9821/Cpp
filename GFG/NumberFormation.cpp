#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x,n) for (int x = 0; x < n; x++)

using namespace std;

class Solution {
    public:
     int solve(int X, int Y, int Z, int x, int y, int z, string sum) {
         int ans = 0;
         if (x < X) {
             string s = sum + "4";

             ull t = stoul(s) % mod;

             ans = (ans % mod + t % mod) % mod;
             ans = (ans % mod + solve(X, Y, Z, x + 1, y, z, s) % mod) % mod;
         }
         if (y < Y) {
             string s = sum + "5";
             ull t = stoul(s) % mod;
             ans = (ans % mod + t % mod) % mod;
             ans = (ans % mod + solve(X, Y, Z, x, y + 1, z, s) % mod) % mod;
         }
         if (z < Z) {
             string s = sum + "6";
             ull t = stoul(s) % mod;
             ans = (ans % mod + t % mod) % mod;
             ans = (ans % mod + solve(X, Y, Z, x, y, z + 1, s) % mod) % mod;
         }
         return ans % mod;
     }
     int getSum(int X, int Y, int Z) {
         // Your code goes here
         return solve(X, Y, Z, 0, 0, 0, "") % mod;
     }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif

    Solution ob;
    cout<<ob.getSum(48, 29, 4) ;
}