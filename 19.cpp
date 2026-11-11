
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *temp = head;
        int count = 0;

        while(temp)
        {
            temp = temp->next;
            count++;
        }

        count -= n;

        ListNode *prev = NULL;
        ListNode *curr = head;

        if(count == 0)
        {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while(count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};