class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++) {
            int num1=queries[i][0];
            int num2=queries[i][1];
            int temp=0;
            for(int j=num1;j<=num2;j++) {
                temp=temp^arr[j];
            }
            ans.push_back(temp);
        }

        return ans;
    }
};