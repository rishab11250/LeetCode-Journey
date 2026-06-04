#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i : arr){
            freq[i]++;
        }
        set<int> count;
        for(auto& j : freq){
            count.insert(j.second);
        }
        return count.size() == freq.size();
    }
};

int main(){
    
    return 0;
}