//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()<2){
            return {};
        }
        sort(arr.begin(),arr.end());
        int i=0;int j=arr.size()-1;
        int maxi=INT_MAX;
        int val1;
        int val2;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(abs(sum-target)<maxi){
                maxi=abs(sum-target);
                val1=min(arr[i],arr[j]);
                val2=max(arr[i],arr[j]);
            }
           if(sum<target){
                i++;
            }
            else {
                j--;
            }
        }
        return {val1,val2};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends