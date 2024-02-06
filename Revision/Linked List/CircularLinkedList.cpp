#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            int val = this->data;
            if(this->next!=NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memory is free for node with data "<<val<<endl;
        }
};

// traversing a linked list
void traverse(Node* &tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl<<endl;
        return;
    }
    int count = 0;
    Node* temp = tail;
    do{
        cout<<tail->data<<" -> ";
        tail = tail->next;
        count++;
    } while(tail!=temp);
    cout<<endl;
    cout<<"Length of Linked List is "<<count<<endl;
}

// inserting a node in linked list
void insertNode(Node* &tail, int element, int data){
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

int main()
{
    
    Node* tail = NULL;

    traverse(tail);

    insertNode(tail, 1, 5);
    traverse(tail);
    cout<<"tail = "<<tail->data<<endl<<endl;
    
    insertNode(tail, 5, 6);
    traverse(tail);
    cout<<"tail = "<<tail->data<<endl<<endl;

    insertNode(tail, 6, 7);
    traverse(tail);
    cout<<"tail = "<<tail->data<<endl<<endl;

    insertNode(tail, 7, 8);
    traverse(tail);
    cout<<"tail = "<<tail->data<<endl<<endl;

    insertNode(tail, 8, 9);
    traverse(tail);
    cout<<"tail = "<<tail->data<<endl<<endl;

    return 0;
}