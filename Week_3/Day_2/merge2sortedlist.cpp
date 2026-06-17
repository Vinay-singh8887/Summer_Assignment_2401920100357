class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(!list1 || !list2) 
        return list1==NULL?list2:list1;

        ListNode* ans ;

        if(list1->val<=list2->val){
            ans = list1;
           ans->next = mergeTwoLists(list1->next,list2);
            
        }
        
        else{
            ans = list2;
            ans->next = mergeTwoLists(list1,list2->next);
            
        }
        return ans;

    }
};