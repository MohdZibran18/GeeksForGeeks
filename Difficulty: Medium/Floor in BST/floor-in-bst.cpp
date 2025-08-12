// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        int value=-1;
        while(root){
            // if(x<root->data) return -1;
            if(root->data==x) return root->data;
            else if(root->data>x) {
                root=root->left;
            }
            else {
                value=root->data;
                root=root->right;
            }
        }
        return value;
    }
};