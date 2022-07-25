#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node *root) {
    Node *temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
   public:
    // Function to remove duplicates from unsorted linked list.
    Node *removeDuplicates(Node *head) {
        map<int, int> mp;
        Node *node = head;
        Node *copy = head;
        while (node->next != NULL) {
            Node *t = node->next;
            cout << node->data << "\t"<<t->data<<endl;
            if (mp.find(t->data) == mp.end()) {
                cout << t->data << "#" << endl;
                mp[t->data] = 1;
            } else {
                node->next = t->next;
                continue;
            }
            node = node->next;
        }
        return head;
        // your code goes here
    }
};

// { Driver Code Starts.

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    // your code goes here
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        Node *result = ob.removeDuplicates(head);
        print(result);
        cout << endl;
    }
    return 0;
}