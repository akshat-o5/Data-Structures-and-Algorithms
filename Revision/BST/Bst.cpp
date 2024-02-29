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


void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}



void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node* root = NULL;

    cout<<"Enter data for creating BST:"<<endl;
    takeInput(root);

    cout<<endl;
    cout<<"Printing Level Order Traversal of BST:"<<endl;
    levelOrder(root);

    cout<<endl;
    cout<<"Printing In Order Traversal of BST:"<<endl;
    inOrder(root);

    cout<<endl;
    cout<<"Printing Pre Order Traversal of BST:"<<endl;
    preOrder(root);

    cout<<endl;
    cout<<"Printing Post Order Traversal of BST:"<<endl;
    postOrder(root);

}