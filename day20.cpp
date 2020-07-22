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
        if(head == NULL) return head;
        if(head->next == NULL)
        {
            if(head->val == val) return NULL;
            else return head;
        }
        ListNode *curr = head;
        ListNode *prev = head;
        
        while(curr)
        {
           
            if(curr->val == val)
            {
                ListNode *tmp = curr;
                if(curr == head)
                {
                    head = curr->next;
                    prev = head;
                    curr = prev;
                }
                else
                {
                        prev->next = curr->next;
                        curr = prev->next;
                }
                delete(tmp);
                
                
            }
            else
            {
                prev = curr;
                if(prev)
                curr = prev->next; 
            }
         
         
        }
        return head;
    }
};
