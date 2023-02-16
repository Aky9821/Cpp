#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int n, ans;
vector<int> x;

int main() {
    cin >> n;
    x.resize(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            int l = x[i], r = x[j];
            while (l < r) {
                int mid = (l + r + 1) / 2;
                int cnt = 0;
                for (int k = 0; k < n; k++)
                    cnt += (x[k] >= l && x[k] < mid);
                if (cnt >= 2)
                    l = mid;
                else
                    r = mid - 1;
            }
            ans = (ans + l - x[i] + 1) % mod;
        }
    cout << ans << endl;
    return 0;
}
