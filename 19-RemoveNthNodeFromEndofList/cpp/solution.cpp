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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return head;
        if(head->next == nullptr && n==1) return nullptr;
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        count = count-n-1;
        if (count < 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
        int curr = 0;
        temp = head;
        while(temp){
            if(curr == count){
                break;
            }
            curr++;
            temp = temp->next;
        }
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        return head;
    }
};

int main(){
    
    return 0;
}