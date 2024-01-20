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
    ListNode* reverseKGroup(ListNode* head, int k) {
         int i=0,j=0,l=0,m=0;
    ListNode *curr1=head;
    ListNode *curr2=head;
    ListNode *curr=head;
    ListNode *curr3=head;
    ListNode *pre=NULL;
    ListNode *pre1=NULL;
    ListNode *pre3=NULL;
    ListNode *fut=NULL;
    ListNode *fut1=NULL;
    while(curr3!=NULL){
        if(j==k-1){
            head=curr3;
            break;
        }
        curr3=curr3->next;
        j++;
    }
   if(j<k-2){
        return head;
    }
    while(curr!=NULL){
        fut=curr->next;
        i=i+1;
        
        if(i==k){
            while(i!=0){
              fut1=curr1->next;
              curr1->next=pre;
              pre=curr1;
              pre3=curr1;
              curr1=fut1;
              i=i-1;
            }
            if(pre1!=NULL){
            pre1->next=pre3;
            }
            pre1=curr2;
            curr2->next=fut;
            curr1=curr2=fut;
            i=0;
            
        }
        curr=fut;
    }
   return curr3;
    }
};