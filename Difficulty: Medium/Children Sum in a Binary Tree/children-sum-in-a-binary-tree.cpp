class Solution {
  public:
   int helper(Node *root){
    //base case 
    if(root==nullptr){
        return 0;  
    }
    int left = helper(root->left);
    int right = helper(root->right);
    if(left == -1 || right == -1) return -1;

    if(root->left == nullptr && root->right == nullptr) return root->data;
    if(root->data != left + right) return -1;
    return root->data;
}

int isSumProperty(Node *root) {
   
    int val = helper(root);
    return val == -1 ? 0 : 1;
}


};