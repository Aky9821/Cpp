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

void spiral(int x,int y,vector<vector<int>>&v,int m,int n,vector<int>&ans,int layer,int turn){
    ans.pb(v[x][y]);
    if(turn ==0){
        y++;
        if(y==n-layer)
            turn = 1;
    } 
    else if (turn == 1){
        x++;
            if(x==m-layer)
                turn = 2;
    } 
    else if (turn == 2){
        y--;
        if(y==layer-1)
            turn = 3;
    } 
    else{
        x--;
        if(x==layer){
            layer++;
            turn = 1;
        }
    }
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
        int n, m;
        cin >> m >> n;
        vector<vector<int>> v;
        REP(x,m){
            vector<int> v2;
            REP(y, n) {
                int t;
                cin >> t;
                v2.pb(t);
            }
            v.pb(v2);
        }
        vector<int> ans;
        spiral(0, 0, v,m,n, ans,1,0);
    }
    return 0;
}