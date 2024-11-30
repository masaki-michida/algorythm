#include <iostream>
using namespace std;

int main() {
    int boxies,cookies;
    cin >> boxies >> cookies;

    string a;
    cin >> a;
    int result = 0;
    for(int i = boxies-1; 0 <= i; i--){
        if(a[i]=='@'&&cookies > 0){
            cookies--;
            a[i] = '.';
        }
    }

    for(int i = 0; i < boxies; i++){
        cout << a[i];
    }

    cout << '\n';
}