class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";
        for (char c : s) {
            if (c != ' ') {
                temp += c;
            } 
            else {
                if (!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }
        if (!temp.empty()) {
            words.push_back(temp);
        }
        temp = "";
        for(int i = (words.size()-1);i>=0;i--){
            temp += words[i];
            if(i != 0) temp += " ";
        }
        return temp;
    }
};