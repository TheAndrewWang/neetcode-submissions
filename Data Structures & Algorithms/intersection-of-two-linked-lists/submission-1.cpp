/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* node) {
        int l = 0;
        while (node != nullptr) {
            l++;
            node = node->next;
        }

        return l;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lengthA = getLength(headA); int lengthB = getLength(headB);
        int diff = abs(lengthA - lengthB);

        if (lengthA > lengthB) {
            for(int i = 0; i < diff; i++) {
                headA = headA->next;
            }
        } else {
            for(int i = 0; i < diff; i++) {
                headB = headB->next;
            }
        }

        while(headA != nullptr && headB != nullptr) {
            if (headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};