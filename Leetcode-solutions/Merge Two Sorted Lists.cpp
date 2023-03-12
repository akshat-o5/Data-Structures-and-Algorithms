// https://leetcode.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* solve(ListNode* head1, ListNode* head2){
    
    if(head1->next==NULL){
        head1->next=head2;
        return head1;
    }
    
    ListNode* curr1 = head1;
    ListNode* next1 = curr1->next;
    ListNode* curr2 = head2;
    ListNode* next2 = curr2->next;
    
    while(next1!=NULL && curr2!=NULL){
        if((curr2->val >= curr1->val) && (curr2->val <= next1->val)){
            curr1->next = curr2;
            curr2->next = next2;
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return head1;
            }
        }
    }
    return head1;
    
} 

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1->val <= list2->val){
            return solve(list1, list2);
        }
        else{
            return solve(list2, list1);
        }
    }
};
