#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        s = s + s;
        return s.contains(goal);
    }
};

int main(){
    
    return 0;
}