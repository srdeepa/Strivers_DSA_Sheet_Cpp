/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x,Node*  next) {
    data = x;
    next = next;
  }
}; */

class Solution{
public:
Node* insertInSortedLL(Node* head,int x){
    Node* newNode = new Node(x);
    if(head == nullptr){
        return newNode;
    }
    else if(head->data > newNode->data){
        newNode->next = head;
        head = newNode;
    }else{
    Node* temp = head;
    while(temp->next != nullptr && temp->next->data < newNode->data){
        temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    }
    return head;
  }
};
