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
    
int isPairPresent(struct Node *root, int target){
        vector<int> ans;
        inordertreversel(root , ans);
        
        int i = 0;
        int j = ans.size()-1;
        
        while(i < j){
            
            int sum = ans[i] + ans[j];
            
            if(sum == target){
                return true;
            }
            else if(sum < target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;   
}

int main(){
    return 0;
}