#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    int passwordStrength(string password) {
        set<char> small;
        set<char> upper;
        set<char> num;
        set<char> special;
        for(char c : password){
            if(c >= 'a' && c<= 'z'){
                small.insert(c);
            }
            else if(c>='A' && c<='Z'){
                upper.insert(c);
            }
            else if(c>='0'&& c<='9'){
                num.insert(c);
            }
            else{
                special.insert(c);
            }
        }
        return small.size() + upper.size()*2 + num.size()*3 + special.size()*5;
    }
};

int main() {
    return 0;
}