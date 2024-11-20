class Solution {
public:
    int takeCharacters(string s, int k) {
        unordered_map<char,int> mp;
        for(auto x:s) {
            mp[x]++;
        }
        if(mp['a']<k || mp['b']<k || mp['c']<k) {
            return -1;
        } 

        int l=0,r=0;
        int n=s.length();
        int ans=INT_MAX;
        while(l<=r && r<n) {
            mp[s[r]]--;
            while(l<=r && (mp['a']<k || mp['b']<k || mp['c']<k)) {
                mp[s[l]]++;
                l++;
            }
            
            ans=min(ans,n-(r-l+1));
            r++;
        }

        return ans;
    }
};