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
    Node *insertBeforeValue(Node *head, int x,int val) {
        if(head == NULL){
           return NULL;
        }
        if(head->data == val){
        return  Node* new_node = new Node(x,head);
         }
        Node* temp = head;
        while(temp->next != NULL){
        if(temp->next->data == val)){
        Node* insertNode = new Node(x);
        insertNode->next = temp->next;
        temp->next = insertNode;
        break;
        }
        temp = temp->next;
        }
      return head;
        }
    };
