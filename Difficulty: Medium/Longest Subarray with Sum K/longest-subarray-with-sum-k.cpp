//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& nums, int k) {
        // code here
          map<int,int>mp;
        int prefSum=0;
        int len=0;
       for(int i=0;i<nums.size();i++){
            prefSum+=nums[i];
            if(prefSum==k){
                len=max(len,i+1);
              
            }
             if(mp.find(prefSum-k)!=mp.end()){
                    len=max(len,i-mp[prefSum-k]);
                }
            if(mp.find(prefSum)==mp.end()){
                mp[prefSum]=i;
            }
             
        }
        return len;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends