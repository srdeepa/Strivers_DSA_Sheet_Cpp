
// User function Template for C++

// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
    int maxValue(Node* root) {
        // Code here
        if (root == nullptr) {
        throw runtime_error("The tree is empty.");
    }

    Node* current = root;
    
    // Traverse the left subtree to find the minimum value
    while (current->left != nullptr) {
        current = current->left;
    }
    
    // Return the value of the leftmost node
    return current->data;
    }
};
