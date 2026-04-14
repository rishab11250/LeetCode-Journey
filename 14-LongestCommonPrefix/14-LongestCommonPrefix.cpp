#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = strs[0].size();
        for(int i = 1;i<strs.size(); i++){
            int temp = 0;
            for(int j = 0;j<strs[i].size();j++){
                if(strs[i][j] == strs[0][j] && j<count){
                    temp++;
                }
                else{
                    break;
                }
            }
            count = min(count, temp);
        }
        string ans = "";
        for(int i = 0; i<count; i++){
            ans += strs[0][i];
        }
        return ans;
    }
};

int main(){
    
    return 0;
}