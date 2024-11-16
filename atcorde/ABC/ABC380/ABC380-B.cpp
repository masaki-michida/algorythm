#include <iostream>
using namespace std;


int main() {
    string lines;
    cin >> lines;
    int line_cnt = 0;

    for(int i = 1; i < lines.size(); i++){
        if (lines[i] == '-')
        {
            line_cnt++;
        }else{
            cout << line_cnt << " ";
            line_cnt = 0;
        }
        
    }
    cout << endl;
}
