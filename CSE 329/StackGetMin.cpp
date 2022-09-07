#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

class Solution {
   public:
};
int minValue = INT_MAX;
stack<int> st, mst;

void pushStack(int n) {
    st.push(n);
    minValue = min(n, minValue);
    mst.push(minValue);
}

void popStack() {
    if (!st.empty()) {
        st.pop();
        mst.pop();
        if (!st.empty())
            minValue = mst.top();
        else
            minValue = INT_MAX;
        
    }
}
int topStack() {
    if (st.empty())
        return -1;
    return st.top();
}
int getMin() {
    if (mst.empty())
        return -1;
    else
        return mst.top();
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        Solution ob;
        stack<int> st;
        pushStack(10);
        cout << getMin() << endl;
        pushStack(1);
        cout << getMin() << endl;
        popStack();
        popStack();
        cout << getMin() << endl;
        cout << getMin() << endl;
    }
    return 0;
}