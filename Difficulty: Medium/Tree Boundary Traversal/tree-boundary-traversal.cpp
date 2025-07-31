
class Solution {
  public:
bool isLeaf(Node * root){
    return root->left == nullptr && root->right == nullptr;
}

// right
void helperRight(Node *root, vector<int>& ans){
    if(root == nullptr){
        return; 
    }
    vector<int> temp;
    while(root){
        if(!isLeaf(root)){
            temp.push_back(root->data);
        }
        if(root->right){
            root = root->right;
        }
        else if(root->left){
            root = root->left;
        }
        else{
            break;
        }
    }
    // reverse and add to ans
    for(int i = temp.size() - 1; i >= 0; i--){
        ans.push_back(temp[i]);
    }
}

// left 
void helperLeft(Node *root, vector<int>& ans){
    if(root == nullptr){
        return; 
    }
    while(root){
        if(!isLeaf(root)){
            ans.push_back(root->data);
        }
        if(root->left){
            root = root->left;
        }
        else if(root->right){
            root = root->right;
        }else {
            break;
        }
    }
}

// leaf
void helperLeaf(Node *root, vector<int>& ans){
    if(root == nullptr){
        return;
    }
    if(isLeaf(root)){
        ans.push_back(root->data);
    }
    helperLeaf(root->left, ans);
    helperLeaf(root->right, ans);
}

vector<int> boundaryTraversal(Node *root) {
    if(root == nullptr) return {};
    vector<int> ans;
    if(!isLeaf(root)) ans.push_back(root->data);

    helperLeft(root->left, ans);
    helperLeaf(root, ans);
    helperRight(root->right, ans);

    // For debug output (you can remove this)
    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
    return ans;
}

};