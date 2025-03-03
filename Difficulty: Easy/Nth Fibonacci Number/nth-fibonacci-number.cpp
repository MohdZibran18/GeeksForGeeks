//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
  int fibo(int n){
      if(n==1){
          return 1;
      }
      if(n==0){
          return 0;
      }
      return fibo(n-1)+fibo(n-2);
  }
    int nthFibonacci(int n) {
        // code here
        return fibo(n);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends