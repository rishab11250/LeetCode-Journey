#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end());
        reverse(sortedScore.begin(), sortedScore.end());
        unordered_map<int, string> map;
        vector<string>result;
        for (int i = 0; i < sortedScore.size(); i++) {
            if (i == 0) {
                map[sortedScore[i]] = "Gold Medal";
            } else if (i == 1) {
                map[sortedScore[i]] = "Silver Medal";
            } else if (i == 2) {
                map[sortedScore[i]] = "Bronze Medal";
            }
            else{
                map[sortedScore[i]] = to_string(i+1);
            }
        }
        for(int i : score){
            result.push_back(map[i]);
        }
        return result;
    }
};

int main(){
    
    return 0;
}