#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string ans = "1";
        for(int i=2;i<=n;i++){
            string curr = "";
            int count = 1;
            for(int i = 1;i<ans.size();i++){
                if(ans[i]==ans[i-1]){
                    count++;
                }
                else{
                    curr += to_string(count) + ans[i-1];
                    count = 1;
                }
            }
            curr += to_string(count) + ans.back();
            ans = curr;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}