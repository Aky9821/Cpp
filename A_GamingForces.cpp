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

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        lli n;
        cin >> n;

        vector<int> v(n);
        REP(x,n){
            cin >> v[x];
        }
        pq<int> q;
        for (auto it : v) {
            q.push(it);
        }
        int x = 0;
        int ans = 0;
        while (ans<n && !q.empty()) {
            if(q.size()>=2){
                int a = q.top();
                q.pop();
                int b = q.top();
                q.pop();
                a--;
                b--;
                ans++;
                if (a > 0)
                    q.push(a);
                if(b>0)
                    q.push(b);
                
            }
            else{
                if(!q.empty()){
                ans++;
                q.pop();
                }
            }
        }
        if(ans>n)
            ans = n;
        cout << ans << endl;
    }
    return 0;
}