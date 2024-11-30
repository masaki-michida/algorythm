#include <iostream>
using namespace std;

int main() {
    int boxies,cookies;
    cin >> boxies >> cookies;

    string a;
    cin >> a;
    int result = 0;
    for(int i = 0; i < boxies; i++){
        if(a[i]=='.'){
            result++;
        }
    }

    result = result + cookies;

    cout << result << endl;
}