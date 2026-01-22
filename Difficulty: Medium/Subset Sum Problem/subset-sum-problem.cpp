class Solution {
  public:
  bool solve(vector<int>& arr, int tar,int ind,int sum){
      if(ind==arr.size() && sum!=tar ){
          return false;
      }
     else if(sum>tar){
          return false;
      }
      else if(sum==tar){
          return true;
      }
      return solve(arr,tar,ind+1,sum+arr[ind]) || solve(arr,tar,ind+1,sum);
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        return solve(arr,sum,0,0);
    }
};