#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    int f(string s1, string s2){
        int n1 = s1.length();
        int n2 = s2.length();
        vector<bool> count(26, false);
        for(int i = 0; i < n1; i++)
            count[ s1[i]-'a'] = true;
        
        for(int i = 0; i < n2; i++)
            if(count[ s2[i]-'a'] == true) return 0;
                
        return n1 * n2;
    }
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                ans = max(ans, f(words[i],words[j]));
        return ans;
    }
};

int main(){
    
    return 0;
}