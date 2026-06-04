#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;
        for(char c : s){
            if(balance == 0){
                count++;
            }
            if(c == 'L'){
                balance++;
            }
            else if(c == 'R'){
                balance--;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}