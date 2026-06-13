class Solution {
public:
    string interpret(string command) {
        string str = "";
        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G') {
                str += 'G';
            } else if (i + 1 < command.length() && command[i] == '(' &&
                       command[i + 1] == ')') {
                str += 'o';
                i++;
            } else if (i + 3 < command.length() &&
                       command.substr(i, 4) == "(al)") {
                str += "al";
                i += 3;
            }
        }
        return str;
    }
};