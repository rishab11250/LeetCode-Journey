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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* first = head;
        if(first->next == nullptr) return head;
        ListNode* second = head->next;
        head = second;
        ListNode* prev = nullptr;
        while(first != nullptr && first->next!=nullptr){
            second = first->next;
            first->next = second->next;
            second->next = first;
            if(prev != nullptr) {
                prev->next = second;
            }
            prev = first;
            first = first->next;
        }
        return head;
    }
};

int main(){
    
    return 0;
}