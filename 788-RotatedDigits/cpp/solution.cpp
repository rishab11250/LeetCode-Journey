#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        for(int i = 1;i<=n;i++){
            int temp = i;
            bool check = false;
            while(temp>0){
                int digit = temp%10;
                if(digit ==3 || digit == 4 || digit == 7){
                    check = false;
                    break;
                }
                else if(digit == 2 || digit == 5 || digit == 6 || digit == 9){
                    check  = true;
                }
                temp /= 10;
            }
            if(check){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}