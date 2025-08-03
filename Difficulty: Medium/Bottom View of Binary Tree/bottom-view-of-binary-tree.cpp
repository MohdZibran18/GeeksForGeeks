
class Solution {
  public:
    vector<int> bottomView(Node *root) {
    
      map<int,int>mp;
        //          node  vertical
        queue<pair<Node*,int>>que;
        que.push({root,0});
        while(!que.empty()){
            int size= que.size();
            for(int i=0;i<size;i++){
                auto node= que.front();
                int ver= node.second;
                Node *temp= node.first;
                que.pop();
                
                mp[ver]= temp->data;
    
                if(temp->left){
                    que.push({temp->left,ver-1});
                }
                if(temp->right){
                    que.push({temp->right,ver+1});
                }
            }
        }
        vector<int>ans;
        for(auto it : mp ){
            ans.push_back(it.second);
        }
        return ans ;
    }
        
    
};