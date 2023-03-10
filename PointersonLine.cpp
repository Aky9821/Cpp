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

    lli n, d;
    cin >> n >> d;
    vector<lli> v(n);
    REP(x, n) {
        cin >> v[x];
    }
    lli ans = 0;
    for (int x = 0; x < n - 2; x++) {
        int l = x + 2, r = n - 1;
        int index = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if(v[mid]-v[x]>d){
                r = mid - 1;
            }
            else{
                index = mid;
                l = mid + 1;
            }
        }
        //cout << v[x] << " " << v[index] << " " << index - x - 1<<endl;
        if (index != -1) {
            ans += ((lli)index - x - 1)*(index-x)/2;
        }
    }
    cout << ans << endl;

    return 0;
}