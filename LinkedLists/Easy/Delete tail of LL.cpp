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
    Node *deletTail(Node *head) {
      if(head == NULL || head->next == NULL){
        return NULL;
      }
      Node* temp = head;
      while(temp->next->next != NULL){
        temp = temp->next;
      }
      freee(temp->next);
       temp->next = nullptr;
      return head;
    }
 };
