/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* new_node = new Node(x);
        // the new node as the head and return
       if (head == nullptr) {
        return new_node;
       }
        // Code here
        Node* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = new_node;  
        return head;
    }
};
