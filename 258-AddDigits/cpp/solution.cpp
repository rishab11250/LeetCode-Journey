class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        string str = to_string(num);
        while(str.size()>1){
            sum = 0;
            for(char c : str){
                sum += c - '0';
            }
            num = sum;
            str = to_string(sum);
        }
        return num;
    }
};