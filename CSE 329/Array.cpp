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

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        int size = 5;
        int ar[size] = {1, 2, 3, 4, 5};
        int n, index;
        cin >> n >> index;
        for (int x = size - 1; x > index; x--) {
            ar[x] = ar[x - 1];
        }
        ar[index] = n;
        for (int x = 0; x < size; x++)
            cout << ar[x] << endl;
    }
    return 0;
}