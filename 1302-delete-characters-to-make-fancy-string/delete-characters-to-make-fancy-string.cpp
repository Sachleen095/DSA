class Solution {
public:
    string makeFancyString(string s) {
        int count=1;
        string ans="";
        ans.push_back(s[0]);
        for(int i=0;i<s.length()-1;i++) {
            if(s[i+1]==s[i]) {
                count++;
                if(count<3) {
                    ans.push_back(s[i+1]);
                }
            }
            else {
                count=1;
                ans.push_back(s[i+1]);
            }
        }
        return ans;
    }
};