#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        char X = x + '0';
        if(s[0] == X) return false;
        for(char c  : s){
            if(c == X) return true;
        }
        return false;
    }
};

int main(){
    
    return 0;
}