class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        priority_queue<int> pq;
        int n=nums.size();
        for(auto x:nums) {
            pq.push(x);
        }

        int i=1;
        while(pq.size() && i<n) {
            nums[i]=pq.top();
            pq.pop();
            i+=2;
        }

        int j=0;
        while(pq.size() && j<n) {
            nums[j]=pq.top();
            pq.pop();
            j+=2;
        }
    }
};