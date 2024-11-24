#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int count = 0;
    
    cin >> n;
    int a[n];

    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i< n-1; i++){
        for(int j = n-1;i<j;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                count++;
            }
        }
    }


    for(int i = 0; i< n; i++){
        cout <<a[i];
        if(i != n-1) cout<<' ';
    }
    cout<<'\n'<<count<<'\n';
}
