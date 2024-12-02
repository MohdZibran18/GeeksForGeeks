//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
 
vector<int> search(string& pat, string& txt) {
    vector<int> ans;
    int m = pat.size();
    int n = txt.size();

    vector<int> lps(m, 0);
    int j = 0;

    for (int i = 1; i < m; i++) {
        while (j > 0 && pat[i] != pat[j]) {
            j = lps[j - 1];
        }
        if (pat[i] == pat[j]) {
            j++;
            lps[i] = j;
        }
    }

    j = 0;
    for (int i = 0; i < n; i++) {
        while (j > 0 && txt[i] != pat[j]) {
            j = lps[j - 1];
        }
        if (txt[i] == pat[j]) {
            j++;
        }
        if (j == m) {
            ans.push_back(i - m + 1);
            j = lps[j - 1];
        }
    }

    return ans;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends