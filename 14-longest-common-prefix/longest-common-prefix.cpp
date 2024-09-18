class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        //traversing first string
        for(int i=0;i<strs[0].length();i++) {
            char ch=strs[0][i];

            bool match =true;
            //traversing remaining strings
            for(int j=1;j<strs.size();j++) {
                //no match
                if(ch!=strs[j][i] || strs[j].length()<i) {
                    match=false;
                    break;
                }
            }
            if(match==false) {
                break;
            }
            else {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};