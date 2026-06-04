#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);
        if(k == 0){
            return ans;
        }
        else if(k>0){
            int sum = 0;
            for(int i = 1;i<=k;i++){
                sum += code[i%n];
            }
            ans[0] = sum;
            for(int i = 1;i<n;i++){
                sum = sum-code[i]+code[(k+i)%n];
                ans[i] = sum;
            }
            return ans;
        }
        else{
            int sum = 0;
            for (int i = 1; i <= abs(k); i++) {
                sum += code[(n - i) % n];
            }
            ans[0] = sum;
            for(int i = 1;i<n;i++){
                sum = sum-code[(i + k + n - 1) % n]+code[i-1];
                ans[i] = (sum);
            }
            return ans;
        }
    }
};

int main(){
    
    return 0;
}