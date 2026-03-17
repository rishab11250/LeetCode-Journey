#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> split;
        string store;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                split.push_back(store);
                store = "";
            } else {
                store += text[i];
            }
        }
        split.push_back(store);
        vector<string> res;
        for (int i = 0; i < split.size() - 2; i++) {
            if (split[i] == first && split[i + 1] == second) {
                res.push_back(split[i + 2]);
            }
        }
        return res;
    }
};

int main(){
    
    return 0;
}