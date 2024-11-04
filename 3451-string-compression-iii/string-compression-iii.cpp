class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int count=0;
        int n=word.length();
        for(int i=0;i<n;i++) {
            count++;
            if(count==9) {
                ans+=count+'0';
                ans+=word[i];
                count=0;
            }
            else if(word[i]!=word[i+1]) {
                ans+=count+'0';
                ans+=word[i];
                count=0;
            }
        }

        return ans;
    }
};