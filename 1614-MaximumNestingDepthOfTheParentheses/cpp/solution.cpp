#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int ans = 0;
        for(char c : s){
            if(c == '('){
                counter++;
            }
            else if(c == ')'){
                counter--;
            }
            ans = max(counter,ans);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}