class Solution {
  public:
    bool solve(vector<int>& arr, int sum , int index,vector<vector<int>>&dp){
        if(sum==0){
            return true;
        }if(index==0){
            return arr[0]==sum;
        }if(dp[index][sum]!=-1){
            return dp[index][sum];
        }
        bool notTake = false;
        bool take = false;
        notTake= solve(arr,sum,index-1,dp);
        if(arr[index]<=sum){
            take= solve(arr,sum-arr[index], index-1,dp);
        }
        return dp[index][sum] = take || notTake;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        int index= arr.size()-1;
         vector<vector<int>>dp(arr.size(), vector<int>(sum+1,-1));
        return solve(arr,sum, index,dp);
    }
};