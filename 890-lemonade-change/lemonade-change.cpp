class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int bill5=0,bill10=0;
        int n=bills.size();
        for(int i=0;i<n;i++) {
            if(bills[i]==5) {
                bill5++;
            }
            else if(bills[i]==10) {
                if(bill5>0) {
                    bill10++;
                    bill5--;
                }
                else {
                    return false;
                }
            }
            else {
                if(bill5>0 && bill10>0) {
                    bill5--;
                    bill10--;
                }
                else if(bill5>2) {
                    bill5-=3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};