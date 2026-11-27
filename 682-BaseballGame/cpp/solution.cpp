#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;
        for(int i =0;i<operations.size();i++){
            if(operations[i] == "C"){
                score.pop();
            }
            else if(operations[i] == "D"){
                score.push(score.top()*2);
            }
            else if(operations[i] == "+"){
                int first = score.top();
                score.pop();
                int second = score.top();
                score.push(first);
                score.push(first+second);
            }
            else{
                score.push(stoi(operations[i]));
            }
        }
        int ans = 0;
        while(!score.empty()){
            ans += score.top();
            score.pop();
        }
        return ans;
    }
};

int main(){
    
    return 0;
}