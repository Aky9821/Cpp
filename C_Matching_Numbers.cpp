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
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            int l = 1;
            int r1 = n + 1;
            int r2=n*2;

            while(l<=n){
                if(l%2==1){
                    cout << l << " " << r2-- << " "<<l+(r2+1)<<endl;
                }
                else{
                    cout << l << " " << r1++ <<" "<<l+(r1-1)<< endl;
                }
                l++;
            }
        }
    }
    return 0;
}