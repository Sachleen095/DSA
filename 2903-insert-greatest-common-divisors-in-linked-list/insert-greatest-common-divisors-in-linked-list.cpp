/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    int gcd(int a,int b) {
        int ans=min(a,b);
        while(ans>0) {
            if(a%ans==0 && b%ans==0) {
                break;
            }
            ans--;
        }

        return ans;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) {
            return head;
        }
        ListNode* curr=head;
        ListNode* curr2=head->next;
        while(curr2!=NULL) {
            int temp=gcd(curr->val,curr2->val);
            ListNode* newNode = new ListNode(temp);
            curr->next=newNode;
            newNode->next=curr2;

            curr=curr->next->next;
            curr2=curr2->next;
        }

        return head;
    }
};