#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<char> chars;
        vector<int> counts;
        string ans;
        for(char c : s){
            if(!chars.empty() && chars.back() == c){
                counts.back()++;
            }
            else{
                chars.push_back(c);
                counts.push_back(1);
            }
            if(counts.back() == k){
                chars.pop_back();
                counts.pop_back();
            }
        }
        for(int i = 0;i<chars.size();i++){
            for(int j = 1;j<=counts[i];j++){
                ans.push_back(chars[i]);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}