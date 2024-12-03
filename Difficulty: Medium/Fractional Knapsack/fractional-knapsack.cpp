//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int cap) {
        // Your code here
        vector<int>v;
        double realAns=0.0;
       vector<pair<double,int>>ans;
       int j=0;
       //yahan humne dono ko insert karliya hai
       for (int i = 0; i < val.size(); i++) {
        ans.push_back({(double)val[i] /wt[i], wt[i]});
    }
    //sort karenge reverse order me val/wt ke according
        sort(ans.rbegin(), ans.rend());
        
        while(j<ans.size()&&cap>0){
            if(cap>=ans[j].second){
                realAns+=ans[j].first*ans[j].second;
                cap-=ans[j].second;
            
            }
            else {
                realAns+=((ans[j].first*ans[j].second)/ans[j].second)*cap;
                break;
            }
            j++;
        }
    
    return realAns;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends