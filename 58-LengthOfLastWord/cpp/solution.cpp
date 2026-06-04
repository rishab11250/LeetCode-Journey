class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> split;
        string temp = "";
        for(int i = 0;i<s.size();i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                if(!temp.empty()){
                    split.push_back(temp);
                    temp = "";
                }
            }
        }
        if(!temp.empty()){
            split.push_back(temp);
        }
        return split[split.size()-1].size();
    }
};