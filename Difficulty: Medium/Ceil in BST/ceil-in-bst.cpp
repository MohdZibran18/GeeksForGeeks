
 void inorder(Node *root,vector<int>&ans){
     if(root==nullptr) return;
     inorder(root->left,ans);
     ans.push_back(root->data);
     inorder(root->right,ans);
     
 }
int findCeil(Node* root, int input) {
    // Your code here
    //brute force app
    vector<int>ans;
    inorder(root,ans);
    int low=0;
    int high=ans.size()-1;
    int mid;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==input){
            return ans[i];
        }
        else if(ans[i]>input) {
            return ans[i];
        }
    }
    return -1;
}