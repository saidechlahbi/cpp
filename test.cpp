#include <iostream>
#include <string>
#include <vector>

#include <list>
using namespace std;

typedef list<int> ListNode;

int addTwoNumbers(ListNode* l1){

    int size_l1 = (*l1).front();
    l1++;
    for(int val : *l1)
    {
        size_l1 *= 10;
        size_l1 = val;
    }
    return size_l1;
}


int main ()
{
    list<int> first = {2,4,3};
    // list<int> second;


    int given = addTwoNumbers(&first);
    cout << given;
}