//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int n=strlen(s);
        int j=0;
        while (j < n && s[j] == ' ') {
        j++;
      }
        int sign=1;
        if (j < n && (s[j] == '-' || s[j] == '+')) {
                if (s[j] == '-') sign = -1;
                j++;
         }
        string ans="";
        long long realAns=0;
        for(int i=j;i<n;i++){
            if (s[i] >= '0' && s[i] <= '9') {
            realAns = realAns * 10 + (s[i] - '0');
                if (realAns > INT_MAX) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
        }       
                else {
                    break; 
         }
        }
        return sign*int(realAns);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends