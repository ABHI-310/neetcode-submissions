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
    vector<int> pv;
    vector<int> qv;
private:
    void solve(TreeNode* node,vector<int> &arr){
        if(node==nullptr){
            arr.push_back(-1);
            return;
        }
        arr.push_back(node->val);
        solve(node->left,arr);
        solve(node->right,arr);

        return;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        else if(!p or !q){
            return false;
        }
        solve(p,pv);
        solve(q,qv);
        if(pv == qv){
            return true;
        }
        else{
            return false;
        }

    }
};
