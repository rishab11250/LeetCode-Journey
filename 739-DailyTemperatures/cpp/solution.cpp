#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> arr(temp.size());
        stack<int> sta;
        for(int i = 0;i<temp.size();i++){
            while(!sta.empty() && temp[i]>temp[sta.top()]){
                int a = sta.top();
                sta.pop();
                arr[a] = i - a ;
            }
            sta.push(i);
        }
        return arr;
    }
};

int main(){
    
    return 0;
}