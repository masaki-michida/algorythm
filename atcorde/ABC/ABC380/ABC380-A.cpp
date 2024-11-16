#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string num = to_string(n);
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (char c : num) {
        if (c == '1') {
            count1++;
        }else if(c == '2'){
            count2++;
        }else if (c == '3')
        {
            count3++;
        }
        
    }
    
    if (count1 == 1 && count2 == 2 && count3 == 3)
    {
        cout << "Yes" << endl;
        return 0;
    }else{
    cout << "No" << endl;
    }
}