#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> store;
        for(int i = 1;i<path.size();i++){
            string temp;
            if(path[i] == '/') continue;
            while(path[i] != '/' && i<path.size()){
                temp.push_back(path[i]);
                i++;
            }
            if(temp == ".."){
                if(!store.empty()){
                    store.pop_back();
                }
            }
            else if(temp == "."){
                temp = "";
                continue;
            }
            else{
                store.push_back(temp);
            }
        }
        if (store.empty()) return "/";
        string ans;
        for(string s : store){
            ans += "/";
            ans += s;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}