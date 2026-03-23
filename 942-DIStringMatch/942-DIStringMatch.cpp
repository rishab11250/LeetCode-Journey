#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int I = 0;
        int D = s.size();
        for(int i = 0;i<s.size();i++){
            if(s[i] == 'D'){
                ans.push_back(D);
                D--;
            }
            else{
                ans.push_back(I);
                I++;
            }
        }
        ans.push_back(D);
        return ans;
    }
};

int main(){
    
    return 0;
}