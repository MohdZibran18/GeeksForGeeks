//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
    //     vector<vector<int>>ans;
    //      vector<vector<int>>index;
    //     //sorting on the basis of start
    //     sort(arr.begin(),arr.end());
    //     int start=arr[0][0];
    //     int end=arr[0][1];
    //     int n=arr.size();
    //     int j=1;
    //     for(int i=1;i<n;i++){
    //         if(arr[i][0]<=arr[i-1][1]){
    //             index.push_back({i-1},{i});
    //             end=arr[i][0];
    //             cnt++;
    //         }
    //     }
    //     if(cnt==n-1){
    //         return {{start,end}};
    //     }
    //     for(int i=0;i<index.size();i++){
    //         int first=[i][0];
    //         int second=[i][1];
    //         vec.erase(vec.begin() + i);

    //     }
    //     return arr;
    // }
    vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(ans.empty() || ans.back()[1]<arr[i][0]){
                ans.push_back(arr[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends