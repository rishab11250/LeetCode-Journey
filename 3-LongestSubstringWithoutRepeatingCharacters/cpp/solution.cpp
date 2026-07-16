#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int left = 0;
        unordered_set<char> unq;
        for(int right = 0;right<s.size();right++){
            while(unq.find(s[right]) != unq.end()){
                unq.erase(s[left]);
                left++;
            }
            unq.insert(s[right]);
            count = max(count, right-left+1);
        }
        return count;
    }
};

int main(){
    
    return 0;
}