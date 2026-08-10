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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return nullptr;
        int len=1;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        if(k%len==0)return head;
        k=k%len;
        int finelen=len-k-1;
        while(temp1!=NULL && finelen--){
            temp1=temp1->next;
        }
        temp->next=head;
        head=temp1->next;
        temp1->next=NULL;
        return head;

        
    }
};