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
int binarySearch(vector<int> v,int n){
    int l = 0, r = v.size() - 1;
    while(l<=r){
        int mid = l+(r -l)/ 2;
        if(v[mid]==n){
            if(mid==0)
                return mid;
            if(v[mid-1]<n)
                return mid;
            else {
                r = mid - 1;
            }
        }
        else if(v[mid]>n)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
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
        int n;
        cin >> n;
        vector<int> v;
        REP(x,n){
            int t;
            cin >> t;
            v.pb(t);
        }
        int s;
        cin >> s;
        cout << binarySearch(v, s);
    }
    return 0;
}