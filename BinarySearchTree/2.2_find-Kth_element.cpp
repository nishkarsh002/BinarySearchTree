// kth smallest and kth largest element
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

int kthsmallest(Node* root , int& i ,int k){
    if(root==NULL){
        return -1;
    }

    int left = kthsmallest(root->left , i , k);

    if(left!= -1){
        return left;
    }

    i++;
    if(i==k){
        return root->data;
    }

    return kthsmallest(root->right , i , k);
}


int main(){
    Node* root = new Node(7);
    root->left = new Node(5);
    root->right = new Node(9);
    int i = 0;
    int k = 1;
    int ans  = kthsmallest(root , i , k);
    cout << ans ; 
    return 1;

}