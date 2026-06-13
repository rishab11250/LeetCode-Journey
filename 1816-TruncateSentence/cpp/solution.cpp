class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word, result;
        int count = 0;

        while (ss >> word) {
            if (!result.empty()) {
                result += " ";
            }
            result += word;
            count++;
            
            if (count == k) break;
        }

        return result;
    }
};