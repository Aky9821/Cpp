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
int gcdEuclidean(int a, int b) {  // O(log(min(a,b)))
    if (b == 0)
        return a;
    else
        gcdEuclidean(b, a % b);
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
        lli n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        REP(x, n) {
            cin >> v[x];
            mp[v[x]]++;
        }
        int ans = 1;
        bool flag = true;
        for (auto it : mp) {
            if(flag){
                ans = it.second;
                flag = false;
            } else
                ans = gcd(ans, it.second);
        }
        if(ans>=2)
        cout << "true"<<endl;
        else
        cout << "false"<< endl;
    }
    return 0;
}