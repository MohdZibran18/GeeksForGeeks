

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        x=x-1;
        Node* node=head;
        while(x--){
            node=node->next;
        }
        // cout<<node->data<<" ";
        if(node->next!=nullptr && node->prev!=nullptr){
            node->prev->next= node->next;
            node->next->prev = node->prev;
            return head;
        }
        //first node 
        else if(node->prev==nullptr){
            head=head->next;
            head->prev=NULL;
            return head;
        }
        //last node
        else if(node->next==NULL){
            node->prev->next=NULL;
            return head;
        }
        return head;
    }
};