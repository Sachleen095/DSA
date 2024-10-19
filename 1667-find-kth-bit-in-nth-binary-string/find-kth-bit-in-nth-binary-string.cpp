class Solution {
int count=1;
private:
    void solve(string &s, int n) {
        if(count==n) {
            return;
        }

        string temp=s;
        for(int i=0;i<temp.length();i++) {
            if(temp[i]=='0') {
                temp[i]='1';
            }
            else {
                temp[i]='0';
            }
        }

        reverse(temp.begin(),temp.end());
        s+="1"+temp;
        count++;

        solve(s,n);
    }
public:
    char findKthBit(int n, int k) {
        string s="0";
        solve(s,n);
        return s[k-1];
    }
};