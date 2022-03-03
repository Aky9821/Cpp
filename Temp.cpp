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
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        next = NULL;
    }
};
class Solution {
   public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *l3 = new ListNode(0);
        ListNode *ans = l3;
        int x = 0;
        while (l1 != NULL && l2 != NULL) {
            ListNode *node = new ListNode(0);
            int x = 0;
            if (l1 != NULL) {
                x += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                x += l2->val;
                l2 = l2->next;
            }
            cout << x << "\t";
            node->val = x % 10;
            x /= 10;
            l3 = node;
            l3 = l3->next;
        }
        if (x != 0) {
            ListNode *node = new ListNode(0);
            node->val = x;
            l3 = node;
        }

        return ans;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    ListNode *x1 = new ListNode(2);
    ListNode *x2 = new ListNode(4);
    ListNode *x3 = new ListNode(3);
    x1->next = x2;
    x2->next = x3;

    ListNode *y1 = new ListNode(5);
    ListNode *y2 = new ListNode(6);
    ListNode *y3 = new ListNode(4);
    y1->next = y2;
    y2->next = y3;
    Solution ob;
    ListNode *z1 = ob.addTwoNumbers(x1, y1);
    while (z1 != NULL) {
        cout << z1->val << "\t";
        z1 = z1->next;
    }

    return 0;
}