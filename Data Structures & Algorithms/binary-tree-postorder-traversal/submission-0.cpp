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
    vector<int> res;

    void postorder(TreeNode* head){
        if(head==NULL){
            return;
        }

        postorder(head->left);
        postorder(head->right);
        res.push_back(head->val);

    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode* head = root;
        postorder(head);

        return res;
    }
};