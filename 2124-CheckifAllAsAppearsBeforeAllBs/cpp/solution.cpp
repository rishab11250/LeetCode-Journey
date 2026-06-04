#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        for(int i = 1;i<s.size();i++){
            if(s[i-1] == 'b' && s[i] == 'a'){
                return false;
            }
        }
        return true;
    }
};

int main() {
    return 0;
}