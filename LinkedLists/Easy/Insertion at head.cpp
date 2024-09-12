/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x,Node*  next) {
    data = x;
    next = next;
  }
}; */

class Solution {
  public:
    Node *insertAtHead(Node *head, int x) {
        Node* new_node = new Node(x,head);
        return temp;
      //or
      // return Node* new_node = new Node(x,head);
    }
};
