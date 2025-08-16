/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *addNode(Node *head, int p, int x) {
        // code here
        Node *node=head;
        while(p--){
            node=node->next;
        }
        Node * newNode= new Node(x);
        newNode->next= node->next;
        node->next=newNode;
        newNode->prev= node;
        if(newNode->next) newNode->next->prev=newNode;
        return head;
    }
};