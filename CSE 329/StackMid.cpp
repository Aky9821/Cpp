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
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL, *dummy = NULL, *mid = NULL;
int s = 0;
Node *addNode(int n) {
    Node *node = new Node();
    node->data = n;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

bool isEmpty() {
    return dummy->next == NULL;
}

int getMid() {
    if (isEmpty())
        return -1;
    cout << mid->data << endl;
    return mid->data;
}
void print() {
    if (dummy->next) {
        Node *node = dummy->next;

        while (node) {
            cout << node->data;
            node = node->next;
        }
    } else
        cout << "Empty";
    cout << endl;
}
void push(int n) {
    Node *node = addNode(n);
    if (dummy->next == NULL) {
        dummy->next = node;
        node->prev = dummy;
        mid = node;
        s++;
    } else {
        node->next = dummy->next;
        dummy->next->prev = node;
        node->prev = dummy;
        dummy->next = node;
        s++;
        if (s % 2 == 0)
            mid = mid->prev;
    }

    print();
    getMid();
}

int top(){
    if(isEmpty())
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
        dummy = addNode(-1);
        REP(x, 10)
        push(x);
    }
    return 0;
}