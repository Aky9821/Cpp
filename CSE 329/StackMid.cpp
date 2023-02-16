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
int getTop() {
    if (isEmpty())
        return -1;

    cout << "Top : " << dummy->next->data << endl;
    return dummy->next->data;
}

int getMid() {
    if (isEmpty())
        return -1;
    cout << "Mid : " << mid->data << endl;
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
    getTop();
}
void deleteMid() {
    if (isEmpty())
        return;
    if (s > 1) {
        Node *prev = mid->prev;
        prev->next = mid->next;
        mid->next->prev = prev;
        s--;
        if (s % 2 == 0) {
            mid = prev;
        } else {
            mid = prev->next;
        }
    } else {
        dummy->next = NULL;
        mid = NULL;
        s--;
    }
    print();
    getMid();
}
int pop() {
    if (!isEmpty()) {
        getTop();
        if (s > 1) {
            dummy->next = dummy->next->next;
            dummy->next->prev = dummy;
            s--;
            if (s % 2 != 0) {
                if (mid->next)
                    mid = mid->next;
            }
        } else {
            mid = NULL;
            dummy->next = NULL;
        }
        print();
        getMid();
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
        dummy = addNode(-1);
        REP(x, 10)
        push(x);
        // REP(x, 10)
        // pop();
        REP(x, 5)
        deleteMid();
        pop();
        deleteMid();
        pop();
        deleteMid();
        deleteMid();
        push(11);
        push(33);
        deleteMid();

        deleteMid();
        }
    return 0;
}