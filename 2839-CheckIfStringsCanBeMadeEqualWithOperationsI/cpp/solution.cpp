#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1 == s2) return true;
        string temp = s1;
        char temps = temp[0];
        temp[0] = temp[2];
        temp[2] = temps;
        if(temp == s2) return true;
        temp = s1;
        temps = temp[1];
        temp[1] = temp[3];
        temp[3] = temps;
        if(temp == s2) return true;
        temp = s1;
        temps = temp[0];
        temp[0] = temp[2];
        temp[2] = temps;
        temps = temp[1];
        temp[1] = temp[3];
        temp[3] = temps;
        if(temp == s2) return true;
        return false;
    }
};

int main(){
    
    return 0;
}