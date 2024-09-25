class Solution {
private:
    void solve(vector<int> &nums,int i,set<vector<int>> &temp) {
        if(i>=nums.size()) {
            temp.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++) {
            swap(nums[i],nums[j]);
            solve(nums,i+1,temp);
            //backtrack
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> temp;
        int index=0;
        solve(nums,index,temp);

        for(auto it=temp.begin();it!=temp.end();it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};