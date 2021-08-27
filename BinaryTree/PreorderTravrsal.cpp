class Solution {
    vector<int>ans;
    void   preorderTraversalHelper(TreeNode* root){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        if(root->left){
              preorderTraversalHelper(root->left);
        }
         if(root->right){
              preorderTraversalHelper(root->right);
        }
        
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalHelper(root);
        return ans;
    }
};
© 2021 GitHub, Inc.