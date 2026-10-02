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
    void inorderTraversalHelper(vector<int>& order, TreeNode* node) {
        if (node == NULL) {
            return;
        }
        inorderTraversalHelper(order, node->left);   // Pehle left jao
        order.push_back(node->val);                   // Phir root ki value daalo
        inorderTraversalHelper(order, node->right);  // Phir right jao
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> order;
        inorderTraversalHelper(order, root);
        return order;
    }
};