class Solution {
public:

    ListNode* mergeTwoSortedLL(ListNode* list1, ListNode* list2) {

        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            }
            else {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;
        }

        if (list1)
            temp->next = list1;
        else
            temp->next = list2;

        return dummyNode->next;
    }

    ListNode* findMiddle(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* sortList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* middle = findMiddle(head);

        ListNode* right = middle->next;
        middle->next = nullptr;

        ListNode* left = head;

        left = sortList(left);
        right = sortList(right);

        return mergeTwoSortedLL(left, right);
    }
};