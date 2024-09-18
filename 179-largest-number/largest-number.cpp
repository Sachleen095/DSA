class Solution {
private:
    static bool comp(string s1,string s2) {
        return s1+s2 > s2+s1;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        string ans="";
        for(int i=0;i<nums.size();i++) {
            temp.push_back(to_string(nums[i]));
        }

        sort(temp.begin(),temp.end(),comp);
        if(temp[0]=="0") {
            return "0";
        }
        for(auto x:temp) {
            ans+=x;
        }

        return ans;
    }
};