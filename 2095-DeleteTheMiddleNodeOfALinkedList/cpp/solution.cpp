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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr){
            return nullptr;
        }
        int count = 0;
        ListNode* curr = head;
        while(curr!=nullptr){
            count++;
            curr = curr->next;
        }
        curr = head;
        for(int i = 1;i<count/2;i++){
            curr = curr->next;
        }
        ListNode* toDelete = curr->next;
        curr->next = curr->next->next;
        delete toDelete;
        return head;
    }
};

int main(){
    
    return 0;
}