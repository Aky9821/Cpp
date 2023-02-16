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
bool ans;
void solve(lli a,lli b,vector<int>v){
    if(a==b){
        ans = true;
        cout << "YES" << endl;
        cout << v.size() << endl;
        for(auto it: v){
            cout << it << " ";
        }
    }
    else{
        if(a>b){
            return;
        }
        else{
            v.push_back(a * 10 + 1);
            solve(a * 10 + 1, b, v);
            v.pop_back();
            v.pb(2 * a);
            solve(a * 2, b, v);

        }
    }
} 
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif
    ans = false;
    lli a, b;
    cin>>a>>b;
    vector<int> v;
    v.pb(a);
    solve(a, b, v);
    if(!ans)
        cout << "NO";
}