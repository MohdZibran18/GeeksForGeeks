//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // Code here
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>que;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    que.push({{i,j},0});
                    vis[i][j]=1;
                }
                else {
                    vis[i][j]=0;
                }
            }
        }
        while(!que.empty()){
            int row=que.front().first.first; //1 
            int col= que.front().first.second; //1 
            int cnt=que.front().second; //0
            que.pop();
            ans[row][col]=cnt;
           int dcol[]={0,1,0,-1};
           int drow[]={-1,0,1,0};
            for(int i=0;i<4;i++){
                int nrow= row+drow[i];
                int ncol= col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 &&ncol<m && vis[nrow][ncol]==0){
                     vis[nrow][ncol]=1;
                    que.push({{nrow,ncol},cnt+1});
                }
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << "\n";
        }
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends