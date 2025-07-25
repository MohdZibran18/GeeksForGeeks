//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool solve(int node, int parent, vector<vector<int>>& adj, vector<int>& vis) {
    vis[node] = 1;
    for (auto adja : adj[node]) {
        if (!vis[adja]) {
            if (solve(adja, node, adj, vis)) {
                return true;
            }
        } else if (adja != parent) {
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);
    for (auto& edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(V, 0);
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            if (solve(i, -1, adj, vis)) {
                return true;
            }
        }
    }
    return false;
}
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends