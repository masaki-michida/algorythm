#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int count = 0;
    bool flag = true;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        flag = false;
        int minj = i;
        for(int j = i; j< n; j++){
            if(a[j]<a[minj]){
                minj = j;
                flag = true;
            }
        }
        if(flag){
            swap(a[i],a[minj]);
            count++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i];
        if(i != n-1){
            cout << " ";
        }
    }

    cout <<'\n' << count << '\n';
}