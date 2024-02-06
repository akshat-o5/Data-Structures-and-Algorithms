// https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        
        if(head == NULL){
            return NULL;
        }
        
        node* curr = head;
        node* prev = NULL;
        node* forward = NULL;
        int count = 0;
        while(curr!=NULL && count<k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        
        if(forward != NULL){
            head->next = reverseIt(forward, k);
        }
        
        return prev;
        
    }
};