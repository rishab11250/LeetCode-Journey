#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefix;
        for(int num : arr1){
            while(num>0){
                prefix.insert(num);
                num /= 10;
            }
        }
        int ans = 0;
        for(int num : arr2){
            while(num>0){
                if(prefix.find(num)!=prefix.end()){
                    int size = to_string(num).size();
                    ans = max(ans, size);
                    break;
                }
                num /=10;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}