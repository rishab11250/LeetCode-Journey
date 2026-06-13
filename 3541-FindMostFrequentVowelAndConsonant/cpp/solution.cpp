#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowel;
        unordered_map<char, int> consonant;
        int maxV = 0;
        int maxC = 0;
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowel[c]++;
                maxV = max(maxV, vowel[c]);
            } else {
                consonant[c]++;
                maxC = max(maxC, consonant[c]);
            }
        }

        return maxV + maxC;
    }
};

int main(){
    
    return 0;
}