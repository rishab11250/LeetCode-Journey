#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    bool prime(int num) {
        if (num <= 1) return false;
        if (num <= 3) return true;
        if (num % 2 == 0 || num % 3 == 0)
            return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }
        return true;
    }

public:
    int sumOfPrimesInRange(int n) {
        int sum = 0;
        string temp = to_string(n);
        reverse(temp.begin(), temp.end());
        int reverse = stoi(temp);
        int start = min(n, reverse);
        int end = max(n, reverse);
        for (int i = start; i <= end; i++) {
            if(prime(i)){
                sum += i;
            }
        }
        return sum;
    }
};

int main(){
    
    return 0;
}