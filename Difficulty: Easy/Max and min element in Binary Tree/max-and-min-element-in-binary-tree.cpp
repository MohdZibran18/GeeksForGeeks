/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    int maxi=INT_MIN;
    int mini=INT_MAX;
    
    void levelOrder(Node *root){
        queue<Node*>que;
        
        que.push(root);
        while(!que.empty()){
            int size= que.size();
            for(int i=0;i<size;i++){
                Node* node = que.front();
                 que.pop();
                if (node->left != nullptr) {
                que.push(node->left);
            }
                if (node->right != nullptr) {
                    que.push(node->right);
                }
                if(node->data>=maxi){
                    maxi=max(maxi,node->data);
                }
                if(node->data<=mini){
                    mini=min(mini,node->data);
                }
            }
        }
}
  public:
    int findMax(Node *root) {
        // code here
        levelOrder(root);
        return maxi;
        
    }

    int findMin(Node *root) {
        levelOrder(root);
        return mini;
    }
};