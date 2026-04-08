#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        string temp = "";
        for (char c : sentence) {
            if (c != ' ') {
                temp += c;
            } else {
                if (!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }
        if (!temp.empty()) {
            words.push_back(temp);
        }
        for(int i = 1;i<words.size();i++){
            if(words[i-1].back() != words[i][0]){
                return false;
            }
        }
        if(words[0][0] != words.back().back()){
            return false;
        }
        return true;
    }
};

int main(){
    
    return 0;
}