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
    Node* parent;
    string value;
    vector<Node*> childs;
    bool isLocked;
    int auxLocked;
    lli lockedUID;
    unordered_map<lli, set<Node*>> auxLockUID;
    Node(string val, Node* par) {
        value = val;
        parent = par;
        isLocked = false;
        auxLocked = 0;
        lockedUID = -1;
    }
};

unordered_map<string, Node*> mp;
Node* buildTree(vector<string>& v, int n, int m) {
    Node* root = new Node(v[0], NULL);
    queue<Node*> q;
    q.push(root);
    mp[v[0]] = root;
    lli x = 1;
    while (x < n) {
        lli y = m;
        Node* t = q.front();
        q.pop();
        vector<Node*> ch;
        while (y-- && x < n) {
            Node* node = new Node(v[x], t);
            mp[v[x]] = node;
            x++;
            ch.push_back(node);
            q.push(node);
        }
        t->childs = ch;
    }
    return root;
}

void printTree(Node* root) {
    if (!root)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int c = q.size();
        while (c--) {
            Node* node = q.front();
            q.pop();
            cout << node->value << "\t\t";
            for (auto it : node->childs) {
                q.push(it);
            }
        }
        cout << endl;
    }
}

bool isLockable(Node* node) {
    if (!node) return true;
    if (node->isLocked) {
        return false;
    }
    //  cout << node->value << endl;
    return isLockable(node->parent);
}
void auxLockFxn(Node* node, lli uid, Node* givenNode) {
    if (!node)
        return;
    node->auxLocked++;
    node->auxLockUID[uid].insert(givenNode);
    auxLockFxn(node->parent, uid, givenNode);
}
bool lockFxn(Node* node, lli uid) {
    if (isLockable(node) && node->auxLocked == 0 && !node->isLocked) {
        node->isLocked = true;
        node->lockedUID = uid;
        auxLockFxn(node, uid, node);
        cout << node->value << " " << node->isLocked << " " << node->lockedUID << endl;

        return true;
    }
    return false;
}

void auxUnlock(Node* node, lli uid, Node* givenNode,Node* upgradeNode) {
    if (!node) return;
    node->auxLocked--;
    if(node!=upgradeNode)
    node->auxLockUID[uid].erase(givenNode);
    if (node->auxLockUID[uid].size() == 0) {
        node->auxLockUID.erase(uid);
    }
    auxUnlock(node->parent, uid, givenNode,upgradeNode);
}

bool unlockFxn(Node* node, lli uid,Node* upgradeNode) {
    // cout << node->isLocked << " " << node->lockedUID << endl;

    if (node->isLocked && node->lockedUID == uid) {
        node->isLocked = false;
        node->lockedUID = -1;
        auxUnlock(node, uid, node,upgradeNode);
        return true;
    }
    return false;
}

bool upgradeFxn(Node* node, lli uid) {
    if (!node->isLocked && isLockable(node) && node->auxLockUID.size() == 1 && node->auxLockUID.find(uid) != node->auxLockUID.end()) {
        for (auto it : node->auxLockUID[uid]) {
            cout << it->value << endl;
            unlockFxn(it, uid,node);
        }
        node->auxLockUID.clear();
        lockFxn(node, uid);
        return true;
    }

    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    lli n, m;
    cin >> n >> m;
    vector<string> v(n);
    REP(x, n) {
        cin >> v[x];
    }
    Node* root = buildTree(v, n, m);
    printTree(root);

    lli q;
    cin >> q;
    while (q--) {
        lli type;
        cin >> type;
        string s;
        cin >> s;
        lli uid;
        cin >> uid;
        Node* node = mp[s];
        if (type == 1) {
            cout << lockFxn(node, uid) << endl;
        } else if (type == 2) {
            cout << unlockFxn(node, uid,NULL) << endl;
        } else {
            cout << upgradeFxn(node, uid) << endl;
        }
    }
    return 0;
}