#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

vector<string> findWords(vector<string>& words) {
    vector<string> res;
    vector<string > row = {"qwertyuiop","asdfghjkl","zxcvbnm"};
    for(int i = 0; i < words.size(); i++){
        int exist = 0;
        char lower = tolower(words[i][0]);
        for(int k=0;k<row.size();k++){
            for (int p = 0; p < row[k].size(); p++) {
                if (row[k][p] == lower) {
                    exist = k;
                    break;
                }
            }
            if(exist != 0){
                break;
            }
        }
        bool brow = true;
        for(int j = 0; j < words[i].size(); j++){
            char lower = tolower(words[i][j]);
            bool target = false;
            for(int p = 0;p<row[exist].size();p++){
                if(row[exist][p] == lower){
                    target = true;
                    break;
                }
            }
            if(!target){
                brow = false;
                break;
            }
        }
        if(brow){
            res.push_back(words[i]);
            break;
        }
    }
    return res;
}

int main(){
    
    return 0;
}