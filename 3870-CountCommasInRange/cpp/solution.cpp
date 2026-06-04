#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        int size = floor(log10(n)) + 1;
        if(size <= 3) return 0;
        int count = 0;
        for(int i = 1000;i<=n;i++){
            count++;
        }
        return count;
    }
};

int main(){
    
    return 0;
}