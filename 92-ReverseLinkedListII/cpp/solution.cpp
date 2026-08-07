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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == nullptr || left == right) return head;
        ListNode* l = head;
        for(int i = 1;i<=left-1;i++){
            l = l->next;
        }
        ListNode* r = l;
        for(int i = 1;i<=right-left+1;i++){
            r = r->next;
        }
        ListNode* prev = r;
        ListNode* curr = l;
        ListNode* nextNode= nullptr;
        while(curr != r){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        if(l==head){
            return prev;
        }
        ListNode* prevNode = head;
        while(prevNode->next != l){
            prevNode = prevNode->next;
        }
        prevNode->next = prev;
        return head;
    }
};

int main(){
    
    return 0;
}