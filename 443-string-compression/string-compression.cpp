class Solution {
public:
    int compress(vector<char>& chars) {
        int ansIndex=0;
        int n=chars.size();
        int i=0;
        while(i<n) {
            int j=i+1;
            while(j<n && chars[i]==chars[j]) {
                j++;
            }

            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1) {
                string temp=to_string(count);
                for(auto x:temp) {
                    chars[ansIndex++]=x;
                }
            }
            i=j;
        }
        chars.erase(chars.begin()+ansIndex,chars.end());
        
        return chars.size();
    }
};