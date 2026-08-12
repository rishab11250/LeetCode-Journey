#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        vector<string> ans;
        if(n<10) return ans;
        map<string,int>mp;
        for(int i=0;i<=(n-10);i++){
            string sub=s.substr(i,10);
            mp[sub]++;
        }
        for(auto it:mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}