class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
    int n = arr.size();
    int cnt = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) cnt++;
        else ans.push_back((k-arr[i]%k));
    }
    if (cnt>=(n+1)/2) return 0;
    sort(ans.begin(), ans.end());
    int ele = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (cnt >= (n + 1) / 2) break;
        ele += ans[i];
        cnt++;
    }
    return ele;
}
};