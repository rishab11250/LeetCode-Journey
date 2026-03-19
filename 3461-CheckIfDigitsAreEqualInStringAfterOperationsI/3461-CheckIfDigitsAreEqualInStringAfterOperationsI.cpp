#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2){
            string temp = "";
            for(int i = 1; i < s.size(); i++){
                temp += (s[i] + s[i-1]) % 10;
            }
            s = temp;
        }
        cout << s << endl;
        return s[0] == s[1];
    }
};

int main(){
    Solution solution;
    string s = "3902";
    cout << solution.hasSameDigits(s) << endl;
    return 0;
}