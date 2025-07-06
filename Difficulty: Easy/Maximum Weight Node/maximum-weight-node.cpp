// User function Template for C++
class Solution {
  public:
    int maxWeightCell(vector<int> &exits) {
    int n = exits.size();
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
        if (exits[i] != -1)        
            arr[exits[i]] += i;
    }

    int maxi = -1;                 
    int index = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= maxi) {      
            maxi = arr[i];
            index = i;
        }
    }
    return index;
}

};