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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* current = root;
        
        // Iteratively search for the value in the BST
        while (current != nullptr) {
            if (val == current->val) {
                return current;  // Found the node
            } else if (val < current->val) {
                current = current->left;  // Search in the left subtree
            } else {
                current = current->right;  // Search in the right subtree
            }
        }
        
        // If the value is not found
        return nullptr;
    }
};
