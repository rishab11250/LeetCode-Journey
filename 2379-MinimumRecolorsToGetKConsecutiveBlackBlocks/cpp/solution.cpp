#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int window = 0;
        for(int i = 0;i<k;i++){
            if(blocks[i]=='W'){
                window++;
            }
        }
        int ans = window;
        for(int right = k;right<n;right++){
            int left = right - k;
            if(blocks[right] == 'W'){
                window++;
            }
            if(blocks[left] == 'W'){
                window--;
            }
            ans = min(window,ans);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}