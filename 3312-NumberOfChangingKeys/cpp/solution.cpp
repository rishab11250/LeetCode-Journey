class Solution {
public:
    int countKeyChanges(string s) {
        if (s.empty()) return 0;
        int count = 0;
        char first = tolower(s[0]);
        for (char i : s) {
            char current = tolower(i);
            if (current != first) {
                count++;
                first = current;
            }
        }
        return count;
    }
};