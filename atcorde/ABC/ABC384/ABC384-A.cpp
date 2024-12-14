#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int a;
    char c1, c2;
    string str;
    cin >> a >> c1 >> c2 >> str;

    for(int i = 0; i<a; i++){
        if(str[i] != c1){
            str[i] = c2;
        }
    }

    cout << str << endl;
    
}