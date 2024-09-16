class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        int n=timePoints.size();
        for(int i=0;i<n;i++) {
            int hrs=stoi(timePoints[i].substr(0,2));
            int min=stoi(timePoints[i].substr(3,2));
            int totalMins=0;
            if(hrs==0 && min==0) {
                totalMins=(24*60);
            }
            else if(hrs==0 && min>0) {
                totalMins=min;
            }
            else {
                totalMins=(hrs*60)+min;
            }
            mins.push_back(totalMins);
        }

        sort(mins.begin(),mins.end());
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++) {
            int diff=abs(mins[i+1]-mins[i]);
            mini=min(diff,mini);
        }

        //checking furst and last element
        mini=min(mini,24*60 - mins.back()+mins.front());
        return mini;
    }
};