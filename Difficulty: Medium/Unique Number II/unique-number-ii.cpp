//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        map<int,int>ans;
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        int first,second;
        for(auto it:ans){
            if(it.second==1){
                first=it.first;
                it.second--;
                break;
            }
        }
        for(auto it:ans){
            if(it.second==1){
                second=it.first;
                it.second--;
            }
        }
        return {first,second};
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

        Solution ob;
        vector<int> ans = ob.singleNum(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends