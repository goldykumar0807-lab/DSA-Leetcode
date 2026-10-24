
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        temp=head;
        len=len-1;
        int x=0;
        while(len>=0){
            x+=(temp->val)*pow(2,len);
            len--;
            temp=temp->next;
        }
        return x;
    }
};
