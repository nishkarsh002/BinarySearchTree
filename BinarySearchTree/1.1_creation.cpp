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

Node* insertintoBST(Node* root , int d){
    if(root==NULL){
        root = new Node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertintoBST(root->right , d);
    }

    else{
        root->left = insertintoBST(root->left , d);
    }

    return root;
}

void takeinput(Node* root){
    int data ;
    cin >> data;

    while(data != -1){
        root = insertintoBST(root , data);
        cin >> data;
    }
}

bool searchinBST(Node* root , int n ){
    Node* temp = root;

    while(temp!=NULL){
        if(temp->data == n){
            return true ;
        }

        if(temp->data > n ){
            temp = temp->left;
      } 

      else{
        temp = temp->left;
      }  
    }
    return false;
}

int main(){
    
    Node* root = NULL;

    cout << "Enter the data to vreate BST";
    takeinput(root);
  
    return 0;

}