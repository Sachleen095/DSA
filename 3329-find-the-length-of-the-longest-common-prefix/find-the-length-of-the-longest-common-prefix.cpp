class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string,int> mp;
        for(auto num1:arr1) {
            string temp1=to_string(num1);
            string prefix="";
            for(auto ch:temp1) {
                prefix+=ch;
                mp[prefix]++;
            }
        }

        int ans=0;
        for(auto num2:arr2) {
            string temp2=to_string(num2);
            string prefix="";
            for(auto ch:temp2) {
                prefix+=ch;
                if(mp.find(prefix)!=mp.end()) {
                    ans=max(ans,static_cast<int>(prefix.length()));
                }
            }
        }

        return ans;
    }
};