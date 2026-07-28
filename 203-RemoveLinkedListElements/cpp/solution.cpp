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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return head;
        }
        while(head!= nullptr &&head->val == val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* current = head;
        while(current != nullptr && current->next != nullptr){
            if(current->next->val == val){
                ListNode* temp1 = current->next;
                current->next = current->next->next;
                delete temp1;
            }
            else{
                current = current->next;
            }
        }
        return head;
    }
};

int main(){
    
    return 0;
}