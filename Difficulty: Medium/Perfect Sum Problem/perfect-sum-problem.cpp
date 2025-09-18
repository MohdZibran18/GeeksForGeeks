class Solution {
  public:
    int solve(vector<int>&arr, int target,int index,vector<vector<int>>&dp){
        if(index == 0){
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || target == arr[0]) return 1;
            return 0;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int take =0;
        if(arr[index]<=target){
          take= solve(arr,target-arr[index],index-1,dp);
        }
        int notTake=solve(arr,target,index-1,dp);
        return dp[index][target]=take+notTake;
    }
    int perfectSum(vector<int>& arr, int target) {
        vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
        return solve(arr,target,arr.size()-1,dp);
    }
};