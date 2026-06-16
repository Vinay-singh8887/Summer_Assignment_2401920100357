class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;

        for(int i =1;i<=n;i++)
        temp = temp->next;
        
        if(temp==NULL) {
            ListNode* newhead = head->next;
            delete(head);
            return newhead;
        }

        ListNode* prev = head;


        while(temp && temp->next){
            prev=prev->next;
            temp =temp->next;
        }
 
        ListNode* del = prev->next; 
        prev->next = prev->next->next;
        
        delete(del);

        return head;

        
    }
};