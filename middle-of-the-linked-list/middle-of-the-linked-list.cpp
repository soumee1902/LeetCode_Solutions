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
        
        ListNode* temp = head;
        int high=0;
        int mid=0;
        
        
        while(temp)
        {
            high++;
            temp = temp->next;
        }
        
        mid = high/2;
        temp = head;
        
        while(temp && mid--)
        {
           
            temp = temp->next;
            //mid--;
        }
            
            
        return temp;
        
    }
};