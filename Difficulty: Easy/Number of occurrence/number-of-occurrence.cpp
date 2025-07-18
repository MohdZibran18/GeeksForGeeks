//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int i=0;
        int j=arr.size();
        while(i<=j){
            if(arr[j]!=target&&arr[i]!=target){
                i++;
                j--;
            }
            else if(arr[i]==target&&arr[j]!=target){
                j--;
            }
            else if(arr[j]==target&&arr[i]!=target){
               i++;
            }
            else if(arr[i]==target&&arr[j]==target){
                return j-i+1;
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends