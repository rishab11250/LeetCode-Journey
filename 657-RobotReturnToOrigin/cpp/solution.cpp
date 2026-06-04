class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for (int i : moves) {
            if (i == 'U') {
                y++;
            } else if (i == 'D') {
                y--;
            } else if (i == 'L') {
                x++;
            } else if (i == 'R') {
                x--;
            }
        }
        return x == 0 && y == 0;
    }
};