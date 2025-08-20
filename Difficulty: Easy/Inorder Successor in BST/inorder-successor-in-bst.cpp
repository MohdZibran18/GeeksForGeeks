class Solution {
  public:
   int inOrderSuccessor(Node *root, Node *x) {
    Node* successor = nullptr;
    Node* curr = root;
    while (curr) {
        if (x->data < curr->data) {
            successor = curr;   
            curr = curr->left;
        }
        else if (x->data > curr->data) {
            curr = curr->right;
        }
        else {
            break; 
        }
    }
    if (!curr) return -1;
    if (curr->right) {
        Node* temp = curr->right;
        while (temp->left) {
            temp = temp->left;
        }
        return temp->data;
    }
    return successor ? successor->data : -1;
}

};