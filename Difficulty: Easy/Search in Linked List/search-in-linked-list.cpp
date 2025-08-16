/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* node, int key) {
        // Code here
        while(node != nullptr){
            if(node->data==key){
             return true;
            }
            node=node->next;
        }
        return false;
    }
};
