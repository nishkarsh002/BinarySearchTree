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

int i = 0;
Node* bstFromPreorder(vector<int>& A, int bound = INT_MAX) {
        if (i == A.size() || A[i] > bound) return NULL;
        Node* root = new Node(A[i++]);
        root->left = bstFromPreorder(A, root->data);
        root->right = bstFromPreorder(A, bound);
        return root;
}

Node* IntoBST(vector<int>& a , int s , int e){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    Node* root = new Node(a[mid]);
    root->left = IntoBST(a , s , mid-1);
    root->right = IntoBST(a , mid+1 , e);
    return root;
}

// given function will take the input of an vector and return the tree
// for any tree to bst we sort the data becoze in order sorted hota hai 

int main()
{
    return 0;
}
