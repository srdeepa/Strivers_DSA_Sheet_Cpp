/*we need to find the floor of a given value x in a Binary Search Tree (BST). The floor is the greatest value in the BST that is smaller than or equal to x.

Problem Breakdown:
If the node’s value is equal to x, then the floor is the node’s value itself.
If the node’s value is greater than x, then we search in the left subtree since the floor must be smaller than the current node.
If the node’s value is smaller than x, it might be the floor, but we need to search in the right subtree to find a greater but still valid floor.
If x is smaller than the smallest node in the tree, return -1.

Approach:
Traverse the BST while updating the floor variable.
Move left if the current node’s value is greater than x, or right if it is smaller than x.*/
//Code Implementation:
class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        int floorVal = -1;  // Initialize the floor value as -1 (not found)
        
        while (root) {
            if (root->data == x) {
                return root->data;  // If we find exact match, return it as the floor
            }
            if (root->data < x) {
                // Current node is a valid floor candidate, but check in the right subtree
                floorVal = root->data;
                root = root->right;
            } else {
                // Move to the left subtree to find a smaller node
                root = root->left;
            }
        }
        return floorVal;  // Return the last valid floor value or -1 if none
    }
};
