#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

class Solution {
   public:
    // Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        // Your code here
        Node *node=new Node(x);
        node->data = x;
        node->next = NULL;
        // if (head == NULL) {
        return node;
        //}
        // node->next = head;
        // return node;
    }

    // Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x) {
        if (head == NULL) {
            Node *node;
            node->data = x;
            node->next = NULL;
            return node;
        }
        Node *node = head;
        while (node->next != NULL) {
            node = node->next;
        }
        Node *t;
        t->data = x;
        t->next = NULL;
        node->next = t;
        return head;
    }
};

// { Driver Code Starts.
int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i) {
            int data, indicator;
            cin >> data;
            cin >> indicator;
            Solution obj;
            if (indicator)
                head = obj.insertAtEnd(head, data);
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head);
    }
    return 0;
}
