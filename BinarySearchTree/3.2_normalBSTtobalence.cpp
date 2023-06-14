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

void inordertreversel(Node* root , vector<int>& ans){
	if(root== NULL) return;

	inordertreversel(root->left , ans);
    ans.push_back(root->data);
	inordertreversel(root->right , ans);
}

Node* convert(int s , int e , vector<int>& ans){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    Node* root = new Node(ans[mid]);
    root->left = convert(s , mid-1 , ans);
    root->right = convert(mid+1, s , ans);
    return root;
}

Node* balance(Node* root){
    vector<int> temp;
    inordertreversel(root , temp);

    return convert(0 , temp.size()-1 , temp );
}

int main(){
    return 0;
}