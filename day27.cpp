// q1.) Reverse a Doubly Linked List

class Solution {
    public:
      DLLNode* reverseDLL(DLLNode* head) {
          stack<int> st;
          DLLNode* temp = head;
          while(temp!=NULL){
              st.push(temp->data);
              temp=temp->next;
          }
          temp = head;
          while(!st.empty()){
              temp->data = st.top();
              st.pop();
              temp = temp->next;
          }
          return head;
      }
  };

// q2  Delete in a Doubly Linked List


class Solution {
    public:
      Node* deleteNode(Node* head, int x) {
          int i = 1;
          Node* temp = head;
          while(i < x && temp != NULL){
              temp = temp->next;
              i++;
          }
          if(temp == head){
              head = head->next;
              head->prev = NULL;
              temp->next = NULL;
              delete temp;
              return head;
          }
          if(temp->prev != NULL){
              temp->prev->next = temp->next;
          }
          if(temp->next != NULL){
              temp->next->prev = temp->prev;
          }
          delete temp;
          return head;
      }
  };