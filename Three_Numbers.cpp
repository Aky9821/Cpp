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
        

};
int make_equal(int A, int B, int C) {
     int s = A + B + C;
     if (s % 3 != 0) {
         return -1;
     }
     int target = s / 3;
     int diff_a = target - A;
     int diff_b = target - B;
     int diff_c = target - C;
     int ops = abs(diff_a) + abs(diff_b) + abs(diff_c);
     ops /= 2;
     return ops;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        int A, B, C;
        cin >> A >> B >> C;
        cout << make_equal(A, B, C) << endl;
    }
    return 0;
}