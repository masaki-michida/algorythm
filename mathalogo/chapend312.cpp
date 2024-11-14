#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    int temp = N;

    for(int i = 2;i <= sqrt(N);i++){
        if(temp%i == 0){
            temp = temp/i;
            cout << i << endl;
            i=2;
        }
    }
    
    cout << temp << endl;

}