
 #include <cstddef>
#include <list>
 #include <iostream>
#include <system_error>

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
  int total_l1 = 0;
  total_l1 = l1->val;
  l1 = l1->next;
  while (l1->next != NULL)
  {
    total_l1 = total_l1 * 10;
    total_l1 += l1->val;
  }


    int total_l2 = 0;
  total_l2 = l2->val;
  l2 = l2->next;
  while (l2->next != NULL)
  {
    total_l2 = total_l2 * 10;
    total_l2 += l2->val;
  }
  
  int reverse_l2 = total_l2 % 10;
  total_l2 /= 10;

  while (total_l2)
  {
    reverse_l2 = reverse_l2 * 10;
    reverse_l2 += total_l2 % 10;
  }
  int result = total_l1 + reverse_l2;
  ListNode *head = new ListNode();
  ListNode *tmp;
  ListNode *it;
  head->val = result % 10;
  head->next = NULL;
  result /= 10;
  while (result)
  {
    tmp = new ListNode();
    tmp->val = result % 10;
    tmp->next = NULL;
    result /= 10;
    it = head;
    while (it->next != NULL)
      it = it->next;
    it->next = tmp;
  }
  return head;
}
