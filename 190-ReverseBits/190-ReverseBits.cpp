#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        string binary;
        for(int i = 0;i<=31;i++){
            int k = n >> i;
            if(k&1){
                binary+='1';
            }
            else{
                binary+='0';
            }
        }
        long long decimal = stoll(binary,nullptr,2);
        return decimal;
    }
};

int main(){
    
    return 0;
}