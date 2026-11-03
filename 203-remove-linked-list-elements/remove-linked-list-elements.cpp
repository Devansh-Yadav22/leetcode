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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur=head;
        while(cur!=nullptr){
            if(head->val==val){
                head=head->next;
                cur=head;
         
        }else if((cur->next!=nullptr)&&(cur->next->val==val)&&(cur->next->next==nullptr)){
                cur->next=NULL;
        }else if((cur->next!=nullptr)&&(cur->next->val==val)&&(cur->next->next!=nullptr)){
                cur->next=cur->next->next;
        }else{
            cur=cur->next;
        }
        }
        return head;
    }
    
};