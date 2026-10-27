#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

class Solution {
public:
    int calculateScore(int a, int b) {
        bitset<32> b1(a);
        bitset<32> b2(b);
        int s1,s2=0;
        string b1s = b1.to_string();
        string b2s = b2.to_string();
        for(char c : b1s){
            if(c=='1'){
                s1++;
            }
        }
        for(char c:b2s){
            if(c=='1'){
                s2++;
            }
        }
        if(s1>=s2){
            return s1*s2;
        }
        return s2/s1;
    }
};

int main(){
    
    return 0;
}