class Solution {
public:
    bool isPalindrome(string s) {
        for (char& c : s) {
            c = tolower(c);
        }
        string smooth = "";
        for (char i : s) {
            if ((i >= 'a' && i <= 'z') || (i >= '0' && i <= '9')) {
                smooth += i;
            }
        }
        int l = 0, r = smooth.size() - 1;
        while (l <= r) {
            if (smooth[l] != smooth[r])
                return false;
            ++l;
            --r;
        }
        return true;
    }
};