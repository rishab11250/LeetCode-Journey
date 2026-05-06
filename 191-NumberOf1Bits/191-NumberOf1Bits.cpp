#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> binary(n);
        string s = binary.to_string();
        int count = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1'){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}