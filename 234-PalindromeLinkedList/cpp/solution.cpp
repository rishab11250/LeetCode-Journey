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

 // Solution 1 Space O(n) and time O(n)
 
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return (head);
//         }
//         ListNode *r_head = nullptr;
//         ListNode *curr = head;
//         while(curr!=nullptr){
//             ListNode *temp = new ListNode(curr->val);
//             temp->next = r_head;
//             r_head = temp;
//             curr = curr->next;
//         }
//         while(head && r_head){
//             if(head->val != r_head->val){
//                 return false;
//             }
//             head = head->next;
//             r_head = r_head->next;
//         }
//         return true;
//     }
// };


// Solution 2 Space O(1) and time O(n)


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return (head);
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* r = fast == nullptr ? slow : slow->next;
        ListNode* prev= nullptr;
        while(r){
            ListNode* temp = r->next;
            r->next = prev;
            prev= r;
            r = temp;
        }
        slow = prev;
        while(head && slow){
            if(head->val != slow->val){
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
};

int main(){
    
    return 0;
}