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
private:
    TreeNode* lca(TreeNode* root,TreeNode* p, TreeNode* q){
        int maxi = max(p->val,q->val);
        int mini = min(p->val,q->val);

        if(root->val<=maxi && root->val>=mini){
            return root;
        }
        else if(root->val > maxi){
            return lca(root->left,p,q);
        }
        else if(root->val < mini){
            return lca(root->right,p,q);
        }

        return root;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr){
            return root;
        }
        TreeNode* ans = lca(root,p,q);
        return ans;
    }
};
