#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int size = max(A.size(), B.size());
    bool flag = true;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        if (A[i] != B[i])
        {
            flag = false;
            break;
        }
        
    }
    
    if (flag)
    {
        count = 0;
    }
    cout << count << endl;
    
}