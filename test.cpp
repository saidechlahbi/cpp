// #include <iostream>
// #include <string>
// #include <vector>

// #include <list>
// using namespace std;

// typedef list<int> ListNode;

// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     list<int>::iterator it = l1->begin();
//     int total_l1 = *it;
//     it++;
//     while(it != l1->end())
//     {
//         total_l1 *= 10;
//         total_l1 += *it;
//         it++;
//     }

//     list<int>::reverse_iterator rit = l2->rbegin();
//     int total_l2 = *rit;
//     rit++;
//     while(rit != l2->rend())
//     {
//         total_l2 *= 10;
//         total_l2 += *rit;
//         rit++;
//     }
//     int total = total_l1 + total_l2;
//     ListNode *mylist = new ListNode();
//     while (total)
//     {
//         mylist->push_front(total%10);
//         total /= 10;
//     }
//     return mylist;
// }


// int main ()
// {
//     list<int> l1 = {2,4,3};
//     list<int>  l2 = {5,6,4};
//     list<int> *list = addTwoNumbers(&l1, &l2);
//     for(ListNode::iterator it = list->begin(); it != list->end(); it++)
//         cout << *it << "\t";
//     cout << endl;
// }

// using standard exceptions
#include <iostream>
#include <exception>
#include <algorithm>
using namespace std;

#include <vector>
int main () {
  std::vector<int> vec = {2,4,6,7};
  std::vector<int>::iterator it = find(vec.begin(), vec.end(), 5);
}