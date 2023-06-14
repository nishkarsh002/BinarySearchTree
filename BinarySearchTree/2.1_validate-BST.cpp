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
// 1 . find inorder traversel and check if its sorted or not


bool checkBST(Node* root , int mini , int maxi){
    if(root==NULL){
        return true;
    }     

    if(root->data >= mini && root->data <= maxi){
        bool left = checkBST(root->left , mini , root->data);
        bool right = checkBST(root->right , root->data , maxi);
        return left && right;
    }

    else{
        return false;
    }
}

int main(){
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    bool ans = checkBST(root , INT_MIN , INT_MAX);
    if(ans){
        cout << "sab changa si";
    }
    else{
        cout << "kuch to gadbad hai daya";
    }
    return 0;
}