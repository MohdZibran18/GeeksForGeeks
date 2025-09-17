class Solution {

  public:
    int minDifference(vector<int>& arr) {
         int sum=0;
         int n= arr.size();
         for(int i=0;i<n;i++) sum += arr[i];
         vector<vector<bool>>dp(n, vector<bool>(sum+1,false));
         //filling  1st base case 
         for(int i=0;i<n;i++){
             dp[i][0]=true;
         }
         //filling second base case 
       if (arr[0] <= sum) {
           dp[0][arr[0]] = true;
        }
         for(int i=1;i<n;i++){
             for(int j=1;j<=sum;j++){
                bool notTake = false;
                bool take = false;
                notTake= dp[i-1][j];
                if(arr[i]<=j){
                    take= dp[i-1][j-arr[i]];
                }
                 dp[i][j] = take || notTake;
             }
         }
        int ans= 1e9;
         for(int i=0;i<=sum/2;i++){
                    if(dp[n-1][i]){
                       ans= min(ans,abs((sum-i)-i));
                }
         }
         return ans;
    }
};
