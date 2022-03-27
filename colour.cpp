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
        int m, n;
        cin >> m >> n;
        int ar[m][n];
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >>y2;
        x1--;
        x2--;
        y1--;
        y2--;
        REP(x,m){
            REP(y,n){
                if((x+y)%2==(x1+y1)%2){
                    ar[x][y] = 1;
                }
                else{
                    ar[x][y] = 2;
                }
            }
        }


        if((x1+y1)%2==(x2+y2)%2){
            REP( x,m){
                REP(y,n){
                    if(ar[x][y]==2){
                        ar[x][y] = 3;
                    }
                }
            }
            ar[x2][y2] = 2;
        }
        REP(x,m){
            REP(y,n){
                cout << ar[x][y] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}