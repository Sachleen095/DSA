class Solution {
public:
    bool isCircularSentence(string sentence) {
        char curr=' ';
        int n=sentence.length();
        if(sentence[0]!=sentence[n-1]) {
            return false;
        }
        for(int i=0;i<n;i++) {
            if(sentence[i]==' ' && sentence[i+1]!=curr) {
                return false;
            }
            if(sentence[i]!=' ') {
                curr=sentence[i];
            }
        }
        return true;
    }
};