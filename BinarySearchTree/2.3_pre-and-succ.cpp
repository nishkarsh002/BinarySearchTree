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

pair<int, int> preandsuc(Node* root , int k){
    Node* temp = root;
    int pre = -1;
    int succ = -1;
    while(temp->data != k){
        if(temp->data > k){
            succ = temp ->data;
            temp= temp->left;
        }

        else{ 
            pre = temp ->data;
            temp= temp->right;
        }
    }
    Node* lefttree = temp->left;
    while(lefttree != NULL){
        pre = lefttree ->data;
        lefttree = lefttree->left;
        }

    Node* righttree = temp->right;
    while(righttree!= NULL){
        succ  = righttree->data;
        righttree = righttree->right;
        }

    return {pre,succ};
}

int main(){
    // cout << "yes";
    return 0;
}