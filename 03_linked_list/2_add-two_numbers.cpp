class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3=new ListNode(-1);
        ListNode* temp3=l3;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
            while(temp1!=NULL && temp2!=NULL){
            int x=temp1->val+temp2->val;
            x+=carry;
            int x1=x;
            if(x/10!=0) x=x%10;
            ListNode* next=new ListNode(x);
            temp3->next=next;
            temp3=temp3->next;
            temp2=temp2->next;
            temp1=temp1->next;
                carry-=carry;
                carry=x1/10;
        }
 
        if(temp1==NULL){
            // temp2 still have some remaining elements
            while(temp2!=NULL){
            int x=temp2->val;
            x+=carry;
            int x1=x;
            if(x/10!=0) x=x%10;
            ListNode* next=new ListNode(x);
            temp3->next=next;
            temp3=temp3->next;
            temp2=temp2->next;
                carry-=carry;
                carry=x1/10;
        }
      
    }
    if(temp2==NULL){
            // temp1 still have some remaining elements
            while(temp1!=NULL){
            int x=temp1->val;
            x+=carry;
            int x1=x;
            if(x/10!=0) x=x%10;
            ListNode* next=new ListNode(x);
            temp3->next=next;
            temp3=temp3->next;
            temp1=temp1->next;
                carry-=carry;
                carry=x1/10;
        }
     }
     if(carry!=0){
        ListNode* next=new ListNode(carry);
        temp3->next=next;
     }
     return l3->next;
    
    }
};
