#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }   

        // Destructor
        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                this->next == NULL;
            }
            cout << " memory is free for node with data " << value << endl;
        }
};

// traversing a singly linked list
void print(Node* &head){
    if (head==NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// insert at head
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// insert at tail
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp; 
}

// insert at middle position
void insertAtPosition(Node* &head, Node* &tail, int pos, int data){
    
    // inserting first
    if(pos==1)
    {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    // inserting last
    if (temp->next==NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // inserting middle
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// deleting a node
void deleteNode(int pos, Node* &head, Node* &tail){

    // deleting first node
    if(pos==1){
        Node* temp=head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while (count<pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        // deleting last node
        if(curr->next==NULL){
            prev->next=NULL;
            tail=prev;
            delete curr;
            return;
        }

        // deleting middle node
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 5);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 3, 12);
    print(head);

    insertAtPosition(head, tail, 5, 20);
    print(head);

    insertAtPosition(head, tail, 1, 2);
    print(head);

    cout<<tail->data<<endl;

    deleteNode(1, head, tail);
    print(head);

    deleteNode(5, head, tail);
    print(head);

    deleteNode(3, head, tail);
    print(head);

    cout<<tail->data<<endl;

    return 0;
}