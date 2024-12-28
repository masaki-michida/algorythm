#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    string n;
    cin >> n;
    int size = n.size();
    int count = 0;

    for(int i = 0; i < size-1; i++){
        if(n[i]=='0'&&n[i+1]=='0'){
            count++;
            i++;
        }
    }


    int ans = size - count;

    cout << ans <<endl;
}