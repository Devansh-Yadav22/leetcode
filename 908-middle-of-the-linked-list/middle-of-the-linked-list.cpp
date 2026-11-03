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
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* cur1=head;
        ListNode* cur2=head;
        while(cur2!=nullptr){
            if(cur2->next==nullptr){
                break;
            }
            cur1=cur1->next;
            cur2=cur2->next->next;
        }
        return cur1;
    }
};