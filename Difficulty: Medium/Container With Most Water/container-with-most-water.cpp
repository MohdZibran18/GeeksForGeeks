//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {

  public:
    int maxWater(vector<int> &nums) {
       
        int left=0;
        int right=nums.size()-1;
        int maxi=0;
        //humko maximum area chahiye hai dono container ke beench ka 
        while(left<right){
            int he= min(nums[left],nums[right]);
            int wid=right-left;
            int area= he*wid;
            maxi=max(maxi,area);
            if(nums[left]<=nums[right]){
                left++;
            }else {
                right--;
            }
        }
        return maxi;
    
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
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends