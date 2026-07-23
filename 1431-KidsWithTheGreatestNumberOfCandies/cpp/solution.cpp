#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max) {
                max = candies[i];
            }
        }
        vector<bool> result(candies.size());
        for (int kid = 0; kid < candies.size(); kid++) {
            if (candies[kid] + extraCandies >= max) {
                result[kid] = true;
            } else {
                result[kid] = false;
            }
        }

        return result;
    }
};

int main(){
    
    return 0;
}