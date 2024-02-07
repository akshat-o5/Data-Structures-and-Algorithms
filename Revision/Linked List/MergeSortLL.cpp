// https://www.geeksforgeeks.org/problems/sort-a-linked-list/1



//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution {
public:
    Node *solve(Node *&head1, Node *&head2) {
        if (head1 == NULL) {
            return head2;
        }
        if (head2 == NULL) {
            return head1;
        }
        if (head1->data <= head2->data) {
            head1->next = solve(head1->next, head2);
            return head1;
        } else {
            head2->next = solve(head1, head2->next);
            return head2;
        }
    }

    Node *getMiddle(Node *head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node *mergeSort(Node *head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        Node *mid = getMiddle(head);
        Node *midNext = mid->next;
        mid->next = NULL; // break the list
        Node *left = mergeSort(head);
        Node *right = mergeSort(midNext);
        return solve(left, right);
    }
};



//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends