class Solution {
  public:
    string firstRepChar(string s) {
        // code
        string ans ="-1";
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                ans= s[i];
                break;
            }
            mp[s[i]]++;
        }
        return ans;
    }
};