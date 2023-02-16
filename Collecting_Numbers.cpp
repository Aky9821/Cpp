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

    int n;
    cin >> n;
    vector<lli> v(n);
    REP(x,n){
        cin >> v[x];
    }
    vector<lli> t;
    lli ans = 1;
    map<lli, lli> mp;
    for (auto it : v) {
        auto it2 = lower_bound(t.begin(), t.end(), it)-t.begin();
        if (it2 == t.size()){
            t.push_back(it);
           
        }
        else{
            if(it2==0 ){
                ans++;
            }
            t[it2] = it;
        }
        mp[t.size()]++;
        // for(auto it2:t){
        //     cout << it2 <<" "<<ans<<endl;
        // }
        // cout << endl;
    }
     ans = 0;
    for (auto it : mp) {
        ans += it.second;
    }
    cout << ans << endl;
    return 0;





    stack<int>st;
    st.push(v[n - 1]);
    for (int x = n - 2; x >= 0;x++){
        int c = 0;
        while(!st.empty()&&st.top()<=v[x]){
            c++;
            st.pop();
        }
        if(c==0){
            if(!st.empty())
                c = 1;
        }
        ans[x] = c;
    }
}