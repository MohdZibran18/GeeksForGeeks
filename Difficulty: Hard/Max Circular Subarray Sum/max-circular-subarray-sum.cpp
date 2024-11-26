//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
         int sum1 = 0;
        int sum2 = 0;
        int total = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            total += arr[i];
            sum1 += arr[i];//maximum sum 
            sum2 += arr[i];//minimum sum of subarray
        
            if (sum1 < 0) sum1 = 0;
            if (sum2 > 0) sum2 = 0;
        
            maxSum = max(maxSum, sum1);
            minSum = min(minSum, sum2);
        }
        
        return max(maxSum, total - minSum);

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends