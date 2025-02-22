//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        int ans = 0;
        int maxi = 0;
        stack<int> st;
        st.push(-1);
    
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (!st.empty()) {
                    ans = i - st.top();
                    maxi = max(maxi, ans);
                } else {
                    st.push(i);
                }
            }
        }
        return maxi;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends