#include <iostream>
using namespace std;

int main() {
    int tooth,breaker;
    cin >> tooth >> breaker;
    int break_count = 0;
    string tooth_status;
    cin >> tooth_status;
    string tooth_brekers(breaker,'O');
    int total_crash = tooth - breaker;

    for (int i = 0; i <= total_crash; i++)
    {   
        string tooth_status2 = tooth_status.substr(i,breaker);

        if(tooth_status2 == tooth_brekers)
        {
            break_count++;
            tooth_status.replace(i, breaker, string(breaker, 'X'));
        }
    }

    cout << break_count << endl;
    
}
//AC 歯の本数　＝　壊す歯の本数の場合の処理を考慮していなくてWA
//replaceの書き方ミス