#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count = 0;
        for(char c : s){
            if(c=='('){
                if(count != 0){
                    ans.push_back(c);
                }
                count++;
            }
            else{
                count--;
                if(count != 0){
                    ans.push_back(c);
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}