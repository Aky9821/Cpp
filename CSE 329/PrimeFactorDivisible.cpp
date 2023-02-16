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

int gcdEuclidean(int a, int b) {  // O(log(min(a,b)))
    if (b == 0)
        return a;
    else
        gcdEuclidean(b, a % b);
}
bool commondivisor(int n,int m){
    if(m==1)
        return true;
    if(gcdEuclidean(n,m)==1)
        return false;
    return true;
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
        cin >> n >> m;
        cout << commondivisor(n, m);
    }
    return 0;
}