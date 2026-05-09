#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;
        for(string st: events){
            if(counter == 10){
                break;
            }
            if(st == "0" || st=="1" || st=="2"||st=="3"||st=="4"||st=="6"){
                score += stoi(st);
            }
            else if(st == "WD" || st=="NB"){
                score++;
            }
            else{
                counter++;
            }
        }
        return {score,counter};
    }
};

int main(){
    
    return 0;
}