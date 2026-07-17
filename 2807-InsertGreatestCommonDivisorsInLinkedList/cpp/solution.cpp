#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//Definition for singly-linked list.
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// solution
class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *node1 = head;
        ListNode *node2 = head->next;
        while (node2 != nullptr)
        {
            int gcdvalue = calculateGCD(node1->val, node2->val);
            ListNode *gcdNode = new ListNode(gcdvalue);
            node1->next = gcdNode;
            gcdNode->next = node2;
            node1 = node2;
            node2 = node2->next;
        }
        return head;
    }

private:
    int calculateGCD(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main()
{

    return 0;
}