#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    string s,t;
    cin >> n >> s >> t;

    int s_len = s.size();
    int t_len = t.size();

    int diff = abs(s_len - t_len);
    

    if(diff>1){
        cout << "No" << endl;
        return 0;
    }


    for(int i = 0; i < s_len; i++){
        if(s[i]!=t[i]&&s[i]!=t[i+1]&&s[i+1]!=t[i]){
            diff++;
        }
        if(diff>1){
            cout << "No" << endl;
            return 0;

        }

    }

    cout << "Yes" << endl;
}