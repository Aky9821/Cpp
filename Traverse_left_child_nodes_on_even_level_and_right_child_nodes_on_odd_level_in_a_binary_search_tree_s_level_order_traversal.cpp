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
                cout << t->value << "\t";
            else {
                cout << "\t";
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
    queue<pair<Node*, char>> q;
    q.push({root, 'z'});
    level = 0;
    while (!q.empty()) {
        int c = q.size();
        while (c--) {
            Node* t = q.front().first;
            if (level % 2 == 0 && q.front().second == 'l') {
                cout << t->value << " ";
            } else if (level % 2 != 0 && q.front().second == 'r') {
                cout << t->value << " ";
            }
            q.pop();

            if (t->left) q.push({t->left, 'l'});

            if (t->right) q.push({t->right, 'r'});
        }
        level++;
    }
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

    Node* virtRoot = new Node(-1);
    for (int x = 0; x < n; x++) {
        makeBST(v[x], virtRoot);
    }
    // printTree(virtRoot->right);
    solve(virtRoot->right, 0);

    return 0;
}