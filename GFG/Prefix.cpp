//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
   public:
    vector<int> prefixCount(int N, int Q, string li[], string query[]) {
        // code here
        vector<map<string, int>> v;

        for (int x = 0; x <= 100000; x++) {
            map<string, int> mp;
            v.push_back(mp);
        }

        for (int x = 0; x < N; x++) {
            string st = "";
            for (int y = 0; y < li[x].length(); y++) {
                st += li[x][y];
                // map<char, int> mp = v[y];
                // mp[li[x][y]]++;
                // v[y] = mp;
                v[y][st]++;
                cout << st << " " << v[y][st] << endl;
            }
        }

        // cout << temp << endl;
        vector<int> ansV;
        for (int x = 0; x < Q; x++) {
            int y = query[x].length();
            int ans = v[y - 1][query[x]];
            ansV.push_back(ans);
        }
        return ansV;
    }
};

//{ Driver Code Starts.

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int Q, N, i = 0, x;
        cin >> N;
        string s;
        string li[N + 1];
        for (int i = 0; i < N; i++)
            cin >> li[i];
        cin >> Q;
        x = Q;
        string query[Q + 1];
        while (Q--) {
            cin >> s;
            query[i++] = s;
        }

        Solution ob;
        vector<int> ans = ob.prefixCount(N, x, li, query);
        for (auto i : ans)
            cout << i << "\n";
    }
    return 0;
}
// } Driver Code Ends