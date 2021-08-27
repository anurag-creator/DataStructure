class Solution {
    bool isMiror(TreeNode* root1, TreeNode* root2){
        if(root1==NULL && root2==NULL){
            return true;
        }
        if(root1 && root2 && root1->val==root2->val){
            return isMiror(root1->left,root2->right) && isMiror(root1->right,root2->left);
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            true;
        }
        return isMiror(root->left,root->right);
    }
};