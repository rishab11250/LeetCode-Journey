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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return 0;
        ListNode* a = headA;
        ListNode* b = headB;
        while(a != b){
            if(a==nullptr){
                a = headB;
            }
            else{
                a = a->next;
            }
            if(b==nullptr){
                b = headA;
            }
            else{
                b = b->next;
            }
        }
        return a;
    }
};

int main(){
    
    return 0;
}