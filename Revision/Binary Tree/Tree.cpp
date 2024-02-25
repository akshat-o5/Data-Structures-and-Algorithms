#include<iostream>
#include<queue>
using namespace std;

class Node{
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

// Creating a Binary Tree
Node* buildTree(Node* &root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of data "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of data "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

// Level Order Traversl
void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL) { 
            cout << endl;
            if(!q.empty()) { 
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}


// In Order Traversal
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}    

// Pre Order Traversal
void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// Post Order Traversal
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{

    Node* root = NULL;
    
    buildTree(root);

    levelOrder(root);

    return 0;
}