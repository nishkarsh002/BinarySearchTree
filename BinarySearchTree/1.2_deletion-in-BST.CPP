#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data ;
        Node* left;
        Node* right;

        Node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Node* minimumval(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    
    return temp;    
}

Node* deletion(Node* root  , int key){
    if(root==NULL){
        return NULL;
    }

    if(root->data == key){
        if(root->left==NULL && root->right==NULL){
            delete(root);
            return NULL;
        }

        // 1 left child
        if(root->left!= NULL && root->right==nullptr){
            Node* temp = root->left;
            delete(root);
            return root;
        }

        // 1 right child
        if(root->left== NULL && root->right!=nullptr){
            Node* temp = root->right;
            delete(root);
            return root;
        }

        // 2 child
        if(!root->left && !root->right){
            int mini = minimumval(root->right)->data;
            root->data = mini;
            root->right = deletion(root->right , mini);
            return root;
        }
    }
     
    else if(root->data > key){
        root->left = deletion(root->left , key);
        return root;
    }

    else{
        root->right = deletion(root->right , key);
        return root;
    }
}

int main(){
    return 0;
}