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
  Node *deletebyValue(Node *head,int val) {
        if (head == NULL) {
            return head;
        }
        // If the node to be deleted is the head node
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp; // Use delete instead of free
            return head;
        }
        Node* temp = head;
        Node* prev = NULL;

        // Traverse the list to find the val 
        while (temp != NULL) {
        // If we found the element to delete
        if (temp->data == val) {
            prev->next = temp->next; // Bypass the node to delete
            delete temp; // Use delete instead of free
            break;
        }
            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};
