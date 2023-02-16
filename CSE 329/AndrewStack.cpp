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
bool isEmpty() {
    return dummy->next == NULL;
}

void pushStack(int n) {
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
        if (s % 2 != 0)
            mid = mid->prev;
    }
}

void pushMidStack(int n) {
    Node *node = addNode(n);

    if (isEmpty()) {
        node->prev = dummy;
        dummy->next = node;
        mid = node;
        s++;

    } else {
        if (s % 2 != 0) {
            Node *t = mid->next;
            mid->next = node;
            node->prev = mid;
            node->next = t;
            mid = mid->next;
            t->prev = node;

        } else {
            Node *t = mid->prev;
            mid->prev = node;
            node->next = mid;
            node->prev = t;
            t->next = node;
            mid = mid->prev;
        }
        s++;
    }
}
void topStack() {
    if (isEmpty())
        cout << -1 << endl;
    else {
        cout << dummy->next->data << endl;
    }
}
void printMid() {
    if (isEmpty()) {
        cout << -1 << endl;
    } else {
        cout << mid->data << endl;
    }
}
void deleteMid() {
    if (isEmpty())
        return;
    else {
        printMid();
        if (s > 1) {
            if (s % 2 != 0) {
                Node *t = mid->prev;
                t->next = mid->next;
                mid->next->prev = t;
                mid = mid->next;
            } else {
                Node *t = mid->prev;
                t->next = mid->next;
                mid->next->prev = t;
                mid = mid->prev;
            }
        } else {
            dummy->next = NULL;
            mid = NULL;
        }
        s--;
    }
}
class Solution {
   public:
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    dummy = addNode(-1);
    int n;
    cin >> n;
    REP(x, n) {
        int t;
        cin >> t;
        pushStack(t);
    }
    // print();
    int q;
    cin >> q;
    REP(x, q) {
        int oper;
        cin >> oper;
        if (oper == 1) {
            int element;
            cin >> element;
            pushStack(element);
        } else if (oper == 2) {
            int element;
            cin >> element;
            pushMidStack(element);
            print();
            printMid();
        } else if (oper == 3) {
            topStack();
        } else if (oper == 4) {
            print();
            deleteMid();
            print();
            printMid();
            cout << endl;
        } else {
            printMid();
        }
    }
    return 0;
}