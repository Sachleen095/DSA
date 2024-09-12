class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        for(int i=0;i<allowed.size();i++){
            mp[allowed[i]]++;
        }

        int ans=0;

        for(int i=0;i<words.size();i++){
            string tmp = words[i];

            bool flag = true;

            for(int j=0;j<tmp.size();j++){
                if(mp.find(tmp[j]) != mp.end()){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }

            if(flag) {
                ans++;
            }
        }

        return ans;
    }
};