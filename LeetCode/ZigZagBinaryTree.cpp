/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
       
        queue<TreeNode *> q;
        int lvl=0;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int size=q.size();
            while(size--)
            {
            TreeNode * temp=q.front();
            q.pop();
           
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            level.push_back(temp->val);
            }
            if(lvl%2==1)
                reverse(level.begin(),level.end());
            lvl++;
          res.push_back(level);
            
        }
        return res;
    }
};