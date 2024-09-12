/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
  Node(int x, Node* next1){
     data = x;
     next = next1;
}; */

class Solution {
  public:
    Node *deleteHead(Node *head) {
      if(head == NULL){
        return head;
      }
      Node* temp = head;
      head= head->next;
      free(temp);
      return head;
    }
 };
