//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int noz=0,noo=0,nott=0,n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0) noz++;
            else if(arr[i]==1) noo++;
            else  nott++;
        }
        for(int i=0;i<n;i++){
            if(i<noz) arr[i]=0;
            else if(i<noz+noo) arr[i]=1;
            else arr[i]=2;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends