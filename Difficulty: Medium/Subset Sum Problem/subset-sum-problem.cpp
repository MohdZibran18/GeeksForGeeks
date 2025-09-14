class Solution {
public:
    bool solve(vector<int>& arr, int target, int index, int sum, vector<vector<int>>& dp) {
        if (sum == target) return true;
        if (index >= arr.size() || sum > target) return false;

        if (dp[index][sum] != -1) {
            return dp[index][sum];
        }

        return dp[index][sum] =solve(arr, target, index + 1, sum + arr[index], dp) ||
                                solve(arr, target, index + 1, sum, dp);
    }

    bool isSubsetSum(vector<int>& arr, int target) {
        vector<vector<int>> dp(arr.size(), vector<int>(target + 1, -1));
        return solve(arr, target, 0, 0, dp);
    }
};
