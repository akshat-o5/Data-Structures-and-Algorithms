#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }

        ~Node(){
            int val = this->data;
            if(next!=NULL){
                delete next;
                this->next = NULL;
            }
            cout << " memory is free for node with data " << val << endl;
        }

};

// traversing a doubly linked list
void traverse(Node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
        count++;
    }
    cout<<"NULL"<<endl;
    cout<<"Length of Doubly Linked List is "<<count<<endl;
}

// inserting at head
void insertAtHead(Node* &head, Node* &tail, int data){
    //if list is empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// inserting at tail
void insertAtTail(Node* &head, Node* &tail, int data){
    //if list is empty
    if(tail==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

// insert at middle 
void insertAtPosition(Node* &head, Node* &tail, int pos, int data){
    //start 
    if(pos==1){
        insertAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }
    //end;
    if(temp->next==NULL){
        insertAtTail(head, tail, data);
        return;
    }
    //middle;
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// deleteing node
void deleteNode(Node* &head, Node* &tail, int pos){
    // start
    if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;
    while(count<pos){
        prev = curr;
        curr=curr->next;
        count++;
    }
    // last
    if(curr->next == NULL){
        prev-> next = NULL;
        curr->prev = NULL;
        tail = prev;
        delete curr;
        return;
    }
    // middle
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}

int main()
{

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;

    insertAtHead(head, tail, 5);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;

    insertAtTail(head, tail, 15);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;    

    insertAtPosition(head, tail, 1, 2);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl; 

    insertAtPosition(head, tail, 5, 20);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;

    insertAtPosition(head, tail, 4, 12);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;

    deleteNode(head, tail, 1);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl; \

    deleteNode(head, tail, 5);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;  

    deleteNode(head, tail, 2);
    traverse(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    cout<<endl;    

    return 0;
}