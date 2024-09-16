/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inorderTraversal(TreeNode* root, vector<int> &inorder) {
    if (root == NULL) return;
    inorderTraversal(root->left, inorder);
    inorder.push_back(root->data);
    inorderTraversal(root->right, inorder);
}

void preorderTraversal(TreeNode* root, vector<int> &preorder) {
    if (root == NULL) return;
    preorder.push_back(root->data);
    preorderTraversal(root->left, preorder);
    preorderTraversal(root->right, preorder);
}

void postorderTraversal(TreeNode* root, vector<int> &postorder) {
    if (root == NULL) return;
    postorderTraversal(root->left, postorder);
    postorderTraversal(root->right, postorder);
    postorder.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root) {
    vector<int> inorder, preorder, postorder;
    
    // Perform the traversals
    inorderTraversal(root, inorder);
    preorderTraversal(root, preorder);
    postorderTraversal(root, postorder);
    
    // Return the result as a vector of vectors
    return {inorder, preorder, postorder};
}
