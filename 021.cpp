// author:  jacob curlin
// file:    lc/021.cpp
// date:    05/13/2023

// Leetcode 21. Merge Two Sorted Lists


class Solution {
public: 

  // Iterative
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

    if (l1 == NULL) { return l2; }
    if (l2 == NULL) { return l1; }


    ListNode *head;
    ListNode *curr;

    if (l1->val < l2->val) {
      head = l1;
      l1 = l1->next;
    }
    else {
      head = l2;
      l2 = l2->next;    
    }
    
    curr = head;

    while (l1 && l2)
    {
      if (l1->val < l2->val) {
        curr->next = l1;
        l1 = l1->next;
      }
      else {
        curr->next = l2;
        l2 = l2->next;
      }
      curr = curr->next;
    }

    if (!l1) {
      curr->next = l2;
    }
    else {
      curr->next = l1;
    }

    return head;
  }

  // Recursive
  /*
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

    if (l1 == NULL) { return l2; }  // base cases
    if (l2 == NULL) { return l1; }

    if (l1->val <= l2->val)
    {
      l1->next = mergeTwoLists(l1->next, l2); // recursive call with newly added node as head argument
      return l1;
    }
    else
    {
      l2->next = mergeTwoLists(l1, l2->next);
      return l2;
    }
  }
  */
};

    

