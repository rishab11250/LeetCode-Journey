#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstMatchingIndex(string s) {
        int i = 0;
        while(i<s.size()){
            if(s[i] == s[s.size()-i-1]){
                return i;
            }
            i++;
        }
        return -1;
    }
};

int main(){
    
    return 0;
}