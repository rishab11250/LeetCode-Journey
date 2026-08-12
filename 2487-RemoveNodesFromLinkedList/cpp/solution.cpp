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
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr!=nullptr){
            ListNode* newNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = newNode;
        }
        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        if(head->next == nullptr) return head;
        head = reverseList(head);
        ListNode* prev = head;
        ListNode* curr = head;
        while(curr->next!=nullptr){
            if(curr->next->val>=prev->val){
                prev->next = curr->next;
                prev = prev->next;
            }
            curr = curr->next;
        }
        prev->next = nullptr;
        return reverseList(head);
    }
};

int main(){
    
    return 0;
}