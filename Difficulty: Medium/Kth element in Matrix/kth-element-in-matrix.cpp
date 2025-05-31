class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
        priority_queue<int,vector<int>, greater<int>>ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans.push(matrix[i][j]);
            }
        }
        while(k>1){
            ans.pop();
            k--;
        }
        return ans.top();
    }
};