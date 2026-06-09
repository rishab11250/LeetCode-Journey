#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        for(char c : words[0]){
            bool check = true;
            for(int i = 1;i<words.size();i++){
                if(!(words[i].contains(c))){
                    check = false;
                    break;
                }
                else{
                    words[i].erase(words[i].find(c), 1);
                }
            }
            if(check){
                ans.push_back(string(1, c));
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}