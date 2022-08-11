#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

struct Node {
    int data;
    Node *next;
} *head = NULL;

class Solution {
   public:
};

Node *addNode(int x) {
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
Node *findNode(Node *dummy, int data) {
    Node *node = dummy->next;
    Node *prev = dummy;
    while (node != NULL && node->data != data) {
        prev = node;
        node = node->next;
    }
    return prev;
}

void deleteNodeSearch(Node *dummy, int data) {
    Node *node = findNode(dummy, data);
    if (node->next != NULL)
        node->next = node->next->next;
}

void printList(Node *head) {
    Node *node = head->next;
    while (node) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
void deleteByNode(Node *dummy, Node *n) {
    Node *prev = dummy, *node = dummy->next;
    while (node->data != n->data) {
        prev = node;
        node = node->next;
    }
    Node *t = prev->next;
    prev->next = prev->next->next;
}
void deleteByNode2(Node *n) {
    if (n->next != NULL) {
        n->data = n->next->data;
        Node *t = n->next;
        n->next = n->next->next;
        delete t;
    } else {
    }
}
void deleteNodeDuplicate(Node *dummy, int n) {
    Node *prev = dummy;
    Node *node = dummy->next;
    while (node != NULL) {
        if (node->data == n) {
            prev->next = node->next;
            node = node->next;
        } else {
            prev = node;
            node = node->next;
        }
    }
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
        head = addNode(4);
        head->next = addNode(4);
        head->next->next = addNode(4);
        head->next->next->next = addNode(4);
        Node *dummy = addNode(-1);
        dummy->next = head;
        printList(dummy);
        // deleteNodeSearch(dummy, 4);
        printList(dummy);
        // deleteByNode(dummy, head->next);
        // deleteByNode2(head->next->next);
        printList(dummy);
        deleteNodeDuplicate(dummy, 4);
        printList(dummy);
    }
    return 0;
}