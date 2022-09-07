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
        string a, b;
        cin >> a >> b;
        bool flag = true;
        if (a.length() == b.length()) {
            map<char, int> mp;
            for(auto it:a){
                mp[it]++;
            }
            for(auto it:b){
                if(mp[it]==0)
                    flag = false;
                else
                    mp[it]--;
            }
        }

        else
            flag = true;
        cout << flag << endl;
    }
    return 0;
}