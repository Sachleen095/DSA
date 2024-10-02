class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> temp;
       temp=arr;
       unordered_map<int,int> mp;
       sort(temp.begin(),temp.end());
       int rank=1;
       for(int i=0;i<temp.size();i++) {
        mp[temp[i]]=rank;
        if(i<temp.size()-1 && temp[i]==temp[i+1]){
            continue;
        }
        rank++;
       } 

       for(int i=0;i<arr.size();i++) {
        temp[i]=mp[arr[i]];
       }

       return temp;
    }
};