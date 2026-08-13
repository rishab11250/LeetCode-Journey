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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;
        while(temp!=nullptr){
            ListNode* big = temp;
            bool check = false;
            while(big!=nullptr){
                if(temp->val<big->val){
                    ans.push_back(big->val);
                    check = true;
                    break;
                }
                big = big->next;
            }
            if(check == false) ans.push_back(0);
            temp = temp->next;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}