#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        int b = 0;
        int a = 0;
        vector<string> ans(n);
        for(int i = 0;i<n;i++){
            if(rain[i]==0){
                ans[i] = "None";
                continue;
            }
            if(i==n-1 || rain[i+1]==0){
                ans[i] = "Bob";
                b++;
                continue;
            }
            if (a <= b) {
                ans[i] = "Alice";
                a++;
            }
            else {
                ans[i] = "Bob";
                b++;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}