// https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1



//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

bool notOriginal(Node *head, unordered_map<Node *, int>&myMap){
    
    while(head){
        if(myMap.find(head)==myMap.end()) return true;
        if(myMap[head] != (head->data)) return true;
        
        head=head->next;
    }
}




// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    bool detectloop(Node* &head){
        if(head == NULL){
            return false;
        }
        Node* slow = head;
        Node* fast = head;
        while(slow!=NULL && fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
    
    Node* floyddetectloop(Node* &head){
        if(head == NULL){
            return NULL;
        }
        Node* slow = head;
        Node* fast = head;
        while(slow!=NULL && fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
    }
    
    Node* getStartingNode(Node* &head){
        if(head == NULL){
            return NULL;
        }
        Node* intersection = floyddetectloop(head);
        Node* slow = head;
        while(slow!=intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
    
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head == NULL){
            return;
        }
        if(detectloop(head) == true){
            Node* startOfLoop = getStartingNode(head);
            Node* temp = startOfLoop;
            while(temp->next!=startOfLoop){
                temp = temp->next;
            }
            temp->next = NULL;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<Node *, int>myMap;
        
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        myMap[head]=num;
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
            myMap[tail]=num;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n || notOriginal(head, myMap))
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}

// } Driver Code Ends