#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        vector<vector<string>> res;
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end()); 
            anagram[key].push_back(s);
        }
        for (auto& it : anagram) {
            res.push_back(it.second);
        }
        return res;
    }
};

int main(){
    
    return 0;
}