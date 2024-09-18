class Solution {
private:
    static bool comp(pair<char,int> p1,pair<char,int> p2) {
        return p1.second>p2.second;
    }
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
        }
        vector<pair<char,int>> temp;
        for(auto it:mp) {
            temp.push_back({it.first,it.second});
        }

        sort(temp.begin(),temp.end(),comp);
        string ans="";
        for(auto x:temp) {
            while(x.second--) {
                ans+=x.first;
            }
        }

        return ans;
    }
};