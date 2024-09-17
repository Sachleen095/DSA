class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       string s=s1+" "+s2;
       stringstream str(s);
       string temp;
       vector<string> ans;
       unordered_map<string,int> mp;
       while(str>>temp) {
        mp[temp]++;
       } 

       for(auto it:mp) {
        if(it.second==1) {
            ans.push_back(it.first);
        }
       }

       return ans;
    }
};