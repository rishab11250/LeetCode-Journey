#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(;left<=right;left++){
            if((words[left][0] == 'a' || words[left][0] == 'e' || words[left][0] == 'i' || words[left][0] == 'o' || words[left][0] == 'u') && (words[left].back() == 'a' || words[left].back() == 'e' || words[left].back() == 'i' || words[left].back() == 'o' || words[left].back() == 'u')){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}