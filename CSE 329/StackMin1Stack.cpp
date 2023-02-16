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
int m = INT_MAX;
stack<int> st;
void pushStack(int n) {
    if(n<=m){
        st.push(m);
        m = n;
    }
    st.push(n);
}

void popStack(){
    if(st.empty())
        return;
    if(m==st.top()){
        st.pop();
        m = st.top();
    }
    st.pop();
}
int getMin(){
    return m;
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
        pushStack(5);
        cout << getMin()<<endl;
        pushStack(4);
        cout << getMin() << endl;
        pushStack(6);
        cout << getMin() << endl;
        pushStack(3);
        cout << getMin() << endl;
        pushStack(10);
        cout << getMin() << endl;
        pushStack(2);
        cout << getMin() << endl;
        pushStack(2);
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        popStack();
        cout << getMin() << endl;
        
    }
    return 0;
}