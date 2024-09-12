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
    Node *insertAtKthElement(Node *head, int x,int k) {
        if(head == NULL){
           if(k==1){
           return new Node(x);
           }
           else{ 
           return head;
           }
         if(k == 1){
        return  Node* new_node = new Node(x,head);
         }
        int cnt= 0;
        Node* temp = head;
        while(temp != NULL){
        cnt++;
        if(cnt == (k-1)){
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
