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

bool isPalindrome(int n){
    int rev = 0;
    for (int x = n; x > 0;x/=10){
        rev = rev * 10+x%10;

    }
    return rev == n;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("Input1.txt","r", stdin);
    freopen("Output1.txt","w", stdout);
#endif
    dummy = addNode(-1);
    int n;
    cin >> n;
    vector<int> v;
    REP(x,n){
        int t;
        cin >> t;
        v.pb(t);
    }
    int q;
    cin >> q;
    vector<pair<int, int>> queries;
    REP(x,q){
        int i, j;
        cin >> i >> j;
        queries.pb({i, j});
    }

    vector<int> aux;
    aux.pb(0);
    REP(x, n) {
        if(isPalindrome(v[x])){
            aux.pb(aux[x] + 1);
        }
        else{
            aux.pb(aux[x]);
        }
    }
    for(auto it:queries){
        cout << aux[it.second] - aux[it.first - 1] << endl;
    }
    return 0;
}