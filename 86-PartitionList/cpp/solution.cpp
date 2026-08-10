#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = new ListNode(0, nullptr);
        ListNode* more = new ListNode(0, nullptr);
        ListNode* moreHead = more;
        ListNode* lessHead = less;
        while(head!=nullptr){
            if(head->val < x){
                less->next = head;
                less = less->next;
            }
            else{
                more->next = head;
                more = more->next;
            }
            head = head->next;
        }
        less->next = moreHead->next;
        more->next = nullptr;
        return lessHead->next;
    }
};

int main(){
    
    return 0;
}