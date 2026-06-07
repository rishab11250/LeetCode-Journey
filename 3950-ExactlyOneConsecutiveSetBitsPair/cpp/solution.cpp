#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool consecutiveSetBits(int n) {
        if (n == 0)
            return false;
        string result = "";
        while (n > 0) {
            result += (n % 2 == 0) ? "0" : "1";
            n /= 2;
        }
        reverse(result.begin(), result.end());
        bool check = false;
        for (int i = 0; i < result.size() - 1; i++) {

            if (result[i] == result[i + 1] && result[i] == '1') {
                if (check) {
                    return false;
                }
                check = true;
            }
        }
        return check;
    }
};

int main(){
    
    return 0;
}