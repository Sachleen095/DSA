class Solution {
private:
    bool checkPermute(vector<int> &temp1,vector<int> &temp2) {
        for(int i=0;i<26;i++) {
            if(temp1[i]!=temp2[i]) {
                return false;
            }
        }

        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> temp1(26,0);
        for(int i=0;i<s1.length();i++) {
            temp1[s1[i]-'a']++;
        }

        vector<int> temp2(26,0);
        int index=0;
        int window=s1.length();
        //traversing first window
        while(index<window && index<s2.length()) {
            temp2[s2[index]-'a']++;
            index++;
        }
        if(checkPermute(temp1,temp2)) {
            return true;
        }

        //traversing rest s2
        while(index<s2.length()) {
            temp2[s2[index]-'a']++;

            //removing previous window element
            temp2[s2[index-window]-'a']--;
            index++;

            if(checkPermute(temp1,temp2)) {
                return true;
            }
        }

        return false;
    }
};