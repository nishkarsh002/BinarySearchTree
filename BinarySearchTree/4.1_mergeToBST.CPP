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

void inorder(Node* root, vector<int> &v) {
        if(!root)   return;
        inorder(root->left,v);
        v.push_back(root->data);
       inorder(root->right,v);
    }
    
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> v1,v2;
       inorder(root1,v1);
       inorder(root2,v2);
       int i=0, j=0, k=0;
       vector<int> ans(v1.size() + v2.size());
       while(i<v1.size() && j<v2.size()) {
           if(v1[i]<v2[j]) {
               ans[k++] = v1[i++];
           }
           else {
               ans[k++] = v2[j++];
           }
       }
       while(i<v1.size()) {
           ans[k++]=v1[i++];
       }

       while(j<v2.size()) {
           ans[k++]=v2[j++];
       }
       return ans;
    }
    
int main(){
    return 0;
}

