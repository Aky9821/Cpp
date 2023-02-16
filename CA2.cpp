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

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif

    int Q;
    cin >> Q;
    vector<int>mark(1000000,0);
    int index = -1;
    int turn = 1;
    while (Q-- > 0) {
        int query;
        cin >> query;
        if(query==1){
            int t;
            cin >> t;
            mark[++index]=t;
        }
        if(query==2){
            index--;
        }
        if(query==3){
            if(index!=-1)
                mark[index] += 5;
        }
        if (query == 4) {
            if (index != -1)
                mark[index] -= 5;
        }
        if (query == 5) {
            reverse(mark.begin(), mark.end());
        }
    }
    int ans = 0;
    for (auto it : mark) {
        ans += it;
    }
    cout << ans << endl;
    return 0;
}