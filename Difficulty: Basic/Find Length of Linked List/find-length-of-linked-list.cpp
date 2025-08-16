/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int helper(Node* head){
        if(head==nullptr){
            return 0;
        }
        return helper(head->next)+1;
    }
    int getCount(Node* head) {
        // Code here
        int count=helper(head);
        return count;
    }
};