#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for (int i : order) {
            if (find(friends.begin(), friends.end(), i) != friends.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};


int main(){
    
    return 0;
}