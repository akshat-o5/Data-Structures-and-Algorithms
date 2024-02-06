// https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    
    int length(Node* &head){
        Node* temp = head;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    
    int getMiddle(Node *head)
    {
        // Your code here
        
        if(head == NULL){
            return -1;
        }
        
        int len = length(head);
        int mid = len/2;
        Node* temp = head;
        while(mid--){
            temp = temp->next;
        }
        
        return temp->data;
        
    }
};