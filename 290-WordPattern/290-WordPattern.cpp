#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> split;
        string temp = "";
        for (char c : s) {
            if (c == ' ') {
                if (!temp.empty()) {
                    split.push_back(temp);
                    temp = "";
                }
            } 
            else {
                temp += c;
            }
        }
        if (!temp.empty()) {
            split.push_back(temp);
        }
        if(split.size() != pattern.size()){
            return false;
        }
        unordered_map<char, string> cs;
        unordered_map<string, char> sc;
        for(int i = 0;i<pattern.size();i++){
            char c = pattern[i];
            string w = split[i];
            if ((cs.count(c) && cs[c] != w) || 
                (sc.count(w) && sc[w] != c)) {
                return false;
            }
            cs[c] = w;
            sc[w] = c;
        }
        return true;
    }
};

int main(){
    
    return 0;
}