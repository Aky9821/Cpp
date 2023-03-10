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
struct Node {
    lli value;
    Node *left, *right;
    Node(lli v) {
        value = v;
        left = NULL;
        right = NULL;
    }
};
void makeBST(lli n, Node* root) {
    Node* node = new Node(n);
    if (n > root->value && !root->right) {
        root->right = node;
        return;
    }
    if (n < root->value && !root->left) {
        root->left = node;
        return;
    }
    if (n > root->value) {
        makeBST(n, root->right);
        return;
    } else {
        makeBST(n, root->left);
        return;
    }
}
// Node* makeBST(lli l, lli r, vector<lli>& v) {
//     lli mid = l + (r - l) / 2;
//     if (l <= r) {
//         Node* node = new Node(v[mid]);
//         node->left = makeBST(l, mid - 1, v);
//         node->right = makeBST(mid + 1, r, v);
//         return node;
//     }
//     return NULL;
// }
void printTree(Node* root) {
    if (!root)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        lli c = q.size();
        while (c--) {
            Node* t = q.front();
            q.pop();
            if (t)
                cout << t->value << " ";
            else {
                cout << "  ";
            }
            if (t) {
                q.push(t->left);
                q.push(t->right);
            }
        }
        cout << endl;
    }
}

void solve(Node* root, lli level) {
    if (!root) return;
    if (level % 2 == 0) {
        if (root->left) cout << root->left->value << " ";
    }
    solve(root->left, level + 1);
    solve(root->right, level + 1);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    lli n;
    cin >> n;
    vector<lli> v(n);
    REP(x, n) {
        cin >> v[x];
    }
    // sort(v.begin(), v.end());
    vector<vector<lli>> grid(n);
    Node* virtRoot = new Node(-1);
    for (int x = 0; x < n; x++) {
        makeBST(v[x], virtRoot);
    }
    // printTree(virtRoot->right);
    solve(virtRoot->right, 0);

    return 0;
}