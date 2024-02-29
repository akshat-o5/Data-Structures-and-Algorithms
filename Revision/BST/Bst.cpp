#include<iostream>
#include<queue>
using namespace std;


class Node {
    public:
        int data;
        Node* left;
        Node* right;


    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }    
};


Node* insertIntoBst(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data < root->data){
        root->left = insertIntoBst(root->left, data);
    }
    else{
        root->right = insertIntoBst(root->right, data);
    }
    return root;
}


void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBst(root, data);
        cin>>data;
    }
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int main()
{
    Node* root = NULL;

    cout<<"Enter data for creating BST:"<<endl;
    takeInput(root);

    cout<<"Printing Level Order Traversal of BST:"<<endl;
    levelOrder(root);

}