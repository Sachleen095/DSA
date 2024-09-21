class Solution {
vector<int> ans;
private:
    void solve(int curr,int n) {
        if(curr>n) {
            return;
        }

        ans.push_back(curr);
        for(int i=0;i<=9;i++) {
            int temp=curr*10+i;
            solve(temp,n);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        //using recursion
        for(int i=1;i<=9;i++) {
            solve(i,n);
        }
        return ans;
    }
};