//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findPages(vector<int> &arr, int m) {
        int n = arr.size();
        if(m>n)
        return -1;
        
        int start =0, end =0, mid, ans=0;
        for(int i=0;i<n;i++){
            if(start <arr[i])
            start = arr[i];
            end +=arr[i];
        }
        
        while(start<=end){
            mid = start +(end-start)/2;
            int pages =0;
            int count = 1;
            for(int i=0;i<n;i++){
                pages+=arr[i];
                if(pages>mid){
                    count++;
                    
                    pages = arr[i];
                }
                
            }
            if(count <=m){
                ans = mid;
                end = mid-1;
            }
            else
            start = mid+1;
        }
        return ans;
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
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends