#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int count = 0;
        int i = 0;
        int j = 0;
        while(i<players.size() && j<trainers.size()){
            if(trainers[j] >= players[i]){
                i++;
                j++;
                count++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}