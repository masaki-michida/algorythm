#include <iostream>
using namespace std;

int main() {
    int pour = 0;
    cin >> pour;
    int total = 0;
    int time[pour];
    int water[pour];

    for(int i = 0; i<pour; i++){
        cin >> time[i] >> water[i];
    }
    total = water[0];
    for(int i = 1;i<pour;i++){
        total -= time[i] - time[i-1];
        if(total < 0){
            total = 0;
        }
        total += water[i];
    }
    
    cout << total << endl;
}