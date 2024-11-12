#include <bits/stdc++.h>
using namespace std;

int main(){
    string abc;
    cin >> abc;

    sort(abc.begin(),abc.end());
    if(abc == "ABC"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}