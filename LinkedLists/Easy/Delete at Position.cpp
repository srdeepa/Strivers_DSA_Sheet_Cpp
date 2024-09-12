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
    Node *deleteKthELement(Node *head,int k) {
    if (head == NULL) {
            return head;
        }
        // If the node to be deleted is the head node
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp; // Use delete instead of free
            return head;
        }

        int cnt = 0;
        Node* temp = head;
        Node* prev = NULL;

        // Traverse the list to find the node at position x
        while (temp != NULL) {
            cnt++;
        // If we found the node to delete
        if (cnt == x) {
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
