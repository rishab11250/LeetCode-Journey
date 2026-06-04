#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> split;
        string temp = "";
        for(char c : s){
            if(c == ' '){
                if(!temp.empty()){
                    split.push_back(temp);
                    temp = "";
                }
            }
            else{
                temp += c;
            }
        }
        if(!temp.empty()){
            split.push_back(temp);
        }
        vector<string> word(split.size(), "");
        for(string st : split){
            int index = st.back() - '1';
            st.pop_back();
            word[index] = st;
        }
        string res = "";
        for(int i =0;i<word.size(); i++){
            res += word[i];
            if(i != word.size() - 1) res += " ";
        }
        return res;
    }
};

int main(){
    
    return 0;
}