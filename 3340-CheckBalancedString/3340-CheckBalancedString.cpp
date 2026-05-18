#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int even = 0;
        int odd = 0;
        for(int i = 0;i<num.size();i++){
            if(i%2==0){
                even += num[i] - '0';
            }
            else{
                odd += num[i] - '0';
            }
        }
        return even == odd;
    }
};

int main(){
    
    return 0;
}