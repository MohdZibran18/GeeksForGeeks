class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int min=-1;
        for(int i=0;i<arr.size()-1;i++){
            min=max(min,arr[i]+arr[i+1]);
        }
        return min;
    }
};