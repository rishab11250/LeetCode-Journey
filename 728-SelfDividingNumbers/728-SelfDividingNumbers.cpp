#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i<=right;i++){
            int temp = i;
            bool flag = false;
            while(temp>0){
                if(temp%10 == 0 || i%(temp%10) != 0){
                    flag = false;
                    break;
                }
                else{
                    flag = true;
                }
                temp /=10;
            }
            if(flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}