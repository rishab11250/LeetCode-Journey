#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countValidPrefixes(string s) {
        int one = 0;
        int zero = 0;
        int ans = 0;
        for(char c : s){
            if(c == '0'){
                zero++;
            }
            else{
                one++;
            }
            if(abs(zero-one)<=1) ans++;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}