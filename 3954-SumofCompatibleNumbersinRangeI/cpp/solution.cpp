#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;
        for(int i = max(1,n-k);i<=n+k;i++){
            if((n&i) == 0){
                sum += i;
            }
        }
        return sum;
    }
};

int main(){
    
    return 0;
}