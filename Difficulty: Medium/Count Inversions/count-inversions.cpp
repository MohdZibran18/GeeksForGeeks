//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int count=0;
  void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            count += mid - left + 1;
            right++;
        }
    }


    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }


    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

  
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
   void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);   
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

    int inversionCount(vector<int> &arr) {
    count = 0;
    int n=arr.size();
    mergeSort(arr, 0, n - 1);
    return count;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends