#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    int getDayOfYear(string date){
        int month = (date[0] - '0') * 10 + (date[1] - '0');
        int day = (date[3]-'0')*10 + (date[4]-'0');
        return (275 * month) / 9 - 2 * ((month + 9) / 12) + day - 30;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int alice_arrive = getDayOfYear(arriveAlice);
        int alice_leave  = getDayOfYear(leaveAlice);
        int bob_arrive   = getDayOfYear(arriveBob);
        int bob_leave    = getDayOfYear(leaveBob);
        int late_arrive =  max(alice_arrive,bob_arrive);
        int early_leave = min(alice_leave,bob_leave);
        int overlap = early_leave-late_arrive+1;
        return max(0,overlap);
    }
};

int main(){
    
    return 0;
}