#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> obj;
        for (int num : nums) {
            if (num % 2 == 0) {
                obj[num]++;
            }
        }
        int result = -1;
        int maxfreq = 0;
        for (auto &i : obj) {
            int num = i.first;
            int count = i.second;
            if(count > maxfreq){
                maxfreq = count;
                result = num;
            }
            else if(count == maxfreq){
                result = min(result, num);
            }
        }
        return result;
    }
};

int main(){
    
    return 0;
}