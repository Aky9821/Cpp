#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct mark {
    int p, c, m;
};

bool mycp(mark m1, mark m2) {
    if (m1.p < m2.p) {
        //  cout << m1.p << " " << m2.p << " x "<<endl;
        return true;
    }
    if (m1.p == m2.p) {
        if (m1.c > m2.c)
            return true;
        else {
            if (m1.m < m2.m)
                return true;
            else
                return false;
        }
    }
    return false;
}

class Solution {
   public:
    void customSort(int phy[], int chem[], int math[], int N) {
        vector<mark> v;
        for (int x = 0; x < N; x++) {
            mark t;
            t.p = phy[x];
            t.c = chem[x];
            t.m = math[x];
            v.push_back(t);
        }

        sort(v.begin(), v.end(), mycp);
        for (auto it : v) {
            cout << it.p << " " << it.c << " " << it.m << endl;
        }
        // your code here
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
        int n;
        cin >> n;
        int phy[n];
        int chem[n];
        int math[n];
        for (int i = 0; i < n; ++i)
            cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
        ob.customSort(phy, chem, math, n);
        // for (int i = 0; i < n; ++i)
        //     cout << phy[i] << " " << chem[i] << " " << math[i] << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends