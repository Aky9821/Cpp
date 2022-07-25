#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

class ListNode {
   public:
    int val;
    ListNode* next;
    ListNode(int val = 0) {
        this->val = val;
        next = NULL;
    }
    ListNode* createLinkedList(vector<int> v) {
        ListNode* list = new ListNode(v[0]);
        ListNode* listcopy = list;
        for (int x = 1; x < v.size(); x++) {
            ListNode* node = new ListNode(v[x]);
            list->next = node;
            list = list->next;
        }
        return listcopy;
    }
    void printLinkedList(ListNode* node) {
        while (node != NULL) {
            cout << node->val << "\t";
            node = node->next;
        }
        cout << endl;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    vector<int> v{10, 20, 30};
    ListNode* l1;
    l1 = l1->createLinkedList(v);
    l1->printLinkedList(l1);
}