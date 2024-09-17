#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data1){
        data = data1;
        left = right = NULL;
    }
};

Node* insertion(Node* root, int val){
    if(root == nullptr) {
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertion(root->left, val);
    }
    else{
        root->right = insertion(root->right, val);
    }
    return root;
} 

void inOrder(Node* root){
    if(root == nullptr) return;
    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}

int main(){
    Node* root = nullptr;
    int n, val;
    cout << "Enter the required nodes" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> val;
        root = insertion(root, val); 
    }
    cout << "Inorder traversal of the BST: ";
    inOrder(root);
    cout << endl;

    return 0;
    
}
