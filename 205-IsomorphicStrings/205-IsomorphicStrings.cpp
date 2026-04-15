#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st;
        unordered_map<char, char> ts;
        for(int i = 0;i<s.size();i++){
            if(st[s[i]] == 0 &&ts[t[i]] == 0 ){
                st[s[i]] = t[i];
                ts[t[i]] = s[i];
            }
            else if(st[s[i]] != t[i] || ts[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    
    return 0;
}