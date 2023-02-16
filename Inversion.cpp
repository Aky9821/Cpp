#include <algorithm>
#include <iostream>
#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

const int MAXN = 100000;

int n;
int a[MAXN];

struct iinversion {
    int i, j;
};

bool compareInversions(Inversion a, Inversion b) {
    return a.i < b.i;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<iinversion> inversions;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                inversions.push_back({i, j});
            }
        }
    }

    sort(inversions.begin(), inversions.end(), compareInversions);

    int max_decrease = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        while (l < inversions.size() && inversions[l].i <= r) {
            l++;
        }
        max_decrease += l;
    }

    cout << inversions.size() - max_decrease << endl;
    return 0;
}
