#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        ans.push_back(s[0]);
        for(int i = 1;i<s.size();i++){
            if(!ans.empty()&& ans.back() == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}