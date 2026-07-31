#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        sort(freq.rbegin(), freq.rend());
        int ans = 0;
        for(int i = 0;i<26;i++){
            if(freq[i] == 0){
                break;
            }
            ans += freq[i] * ((i/8) + 1);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}