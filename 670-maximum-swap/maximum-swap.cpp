class Solution {
public:
    int maximumSwap(int num) {
        string temp=to_string(num);
        int n=temp.length();
        //to check last occur. of each digit
        vector<int> pos(10,-1);
        for(int i=0;i<n;i++) {
            pos[temp[i]-'0']=i;
        }
        for(int i=0;i<n;i++) {
            for(int j=9;j>temp[i]-'0';j--) {
                if(pos[j]>i) {
                    swap(temp[i],temp[pos[j]]);
                    return stoi(temp);
                }
            }
        }

        return stoi(temp);
    }
};