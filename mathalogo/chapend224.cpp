#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    cout << sum%100 << endl;

    
}