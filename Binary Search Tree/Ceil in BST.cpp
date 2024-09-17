/*To find the ceil of a given value in a Binary Search Tree (BST), you need to find the smallest value in the BST that is greater than or equal to the given value. Here’s how you can implement the function to find the ceil in a BST:

Ceil in BST Logic:
If the current node’s value is equal to the key, then the ceil is the node’s value itself.
If the key is greater than the current node’s value, move to the right subtree (since all values in the left subtree are smaller).
If the key is smaller than the current node’s value, the current node could be the ceil, but there might be a smaller valid value 
in the left subtree, so move to the left subtree and continue searching. */

//Code is here
// User function Template for C++

// Function to return the ceil of given number in BST.
int findCeil(Node* root, int key) {
    int ceil = -1;  // Initialize ceil as -1 (not found)
    
    while (root) {
        if (root->data == key) {
            return root->data;  // If we find exact match, return it as the ceil
        }
        if (root->data < key) {
            // Move to the right subtree if the current node's value is smaller than the key
            root = root->right;
        } else {
            // If current node's value is greater, it could be the ceil, move to the left
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil; 
}
