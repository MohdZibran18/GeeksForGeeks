class Solution {
  public:
  int helper(vector<int>& cost, int index, vector<int>&dp) {
        if(index == 0) return 0;
        if(dp[index]!=-1) return dp[index];
        int left = helper(cost, index - 1,dp) + abs(cost[index] - cost[index - 1]);
        int right = INT_MAX;
        if(index > 1) {
            right = helper(cost, index - 2,dp) + abs(cost[index] - cost[index - 2]);
        }
        return dp[index]= min(left, right);
    }
    int minCost(vector<int>& cost) {
         int n = cost.size();
        vector<int> dp(n+1, -1); // step 0
         return  helper(cost,cost.size()-1,dp);
        
    }
};